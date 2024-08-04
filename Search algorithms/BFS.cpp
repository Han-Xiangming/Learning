#include <iostream>
#include <queue>
using namespace std;
int a[105][105], vis[105][105];
int di[4] = {-1, 0, 1, 0}, dj[4] = {0, 1, 0, -1};
int sx,sy,ex,ey,n;
void bfs(){
    queue<int> qi,qj;
    qi.push(sx);
    qj.push(sy);
    vis[sx][sy] = 0;
    while(!qi.empty()){
        int i = qi.front();
        int j = qj.front();
        for(int k = 0; k < 4; k++){
            int x = i + di[k];
            int y = j + dj[k];
            if(x >= 1 && x <= n && y >= 1 && y <= n && vis[x][y] == -1){
                qi.push(x);
                qj.push(y);
                vis[x][y] = vis[i][j] + 1;
            }
        }
        qi.pop();
        qj.pop();
    }
}
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    cin >> sx >> sy >> ex >> ey;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            vis[i][j] = -1;
        }
    }
    bfs();
    if (vis[ex][ey] == -1){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        cout << vis[ex][ey] << endl;
    }
    return 0;
}

// 5
// 0 1 0 0 0
// 0 1 0 1 0
// 0 0 0 0 0
// 0 1 1 1 0
// 0 0 0 1 0
// 1 1 5 5