#include <iostream>
#include <queue>
using namespace std;

int a[101][101]; // 地图数组
int n, m;
int di[4] = {0, 1, 0, -1}, dj[4] = {1, 0, -1, 0}; // 方向数组

void bfs(int i, int j)
{
    queue<pair<int, int>> q;
    q.push({i, j}); 
    a[i][j] = 0;
    while (!q.empty()) {
        int x = q.front().first, y = q.front().second; 
        for (int k = 0; k < 4; k++){
            int nx = x + di[k];
            int ny = y + dj[k];
            if (nx >= 1 && nx <= n && ny >= 1 && ny <= m && a[nx][ny] == 1)
            {
                q.push({nx, ny}); 
                a[nx][ny] = 0;
            }
        }
        q.pop();
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (a[i][j] == 1){
                cnt++;
                bfs(i, j);
            }
        }
    }
    cout << cnt;
    return 0;
}