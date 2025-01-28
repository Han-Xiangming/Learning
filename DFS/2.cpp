#include <bits/stdc++.h>
using namespace std;
int dx[5]={0,1,0,-1},dy[5]={1,0,-1,0};
int a[101][101],n,m;
void dfs(int x,int y,int p){
    a[x][y]=p;
    for (int k=0;k<4;k++){
        int nx=x+dx[k],ny=y+dy[k];
        if (nx >= 1 && nx <= n && ny >= 1 && ny <= m && a[nx][ny]==0){   
            dfs(nx,ny,++p);
        }
    }
}
int main(){
    cin >> n >> m;
    dfs(1,1,1);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}