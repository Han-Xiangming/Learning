#include <iostream>
#include <queue>
using namespace std;

const int maxn = 105; 
int n, m, mp[maxn][maxn]; 
queue<pair<int, int>> q; 
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

void bfs(int x, int y) {
    q.push({x, y});
    mp[x][y] = 0;
    while (!q.empty()) {
        pair<int, int> f = q.front();   
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = f.first + dx[i];
            int ny = f.second + dy[i];
            if (nx >= 1 && nx <= n && ny >= 1 && ny <= m && mp[nx][ny] == 1) { 
                mp[nx][ny] = 0;
                q.push({nx, ny});
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mp[i][j];
        }
    }
    int cnt = 0; 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (mp[i][j] == 1) {
                cnt++;
                bfs(i, j);
            }
        }
    }
    cout << cnt;
    return 0;
}