#include <bits/stdc++.h>
using namespace std;
int dx[5]={-1,1,0,0},dy[5]={0,0,-1,1};
int b[101][101],n,m;
char a[101][101];
bool f=false;
void dfs(int x,int y){
    if (x==n && y==m){
        f=true;
        return;
    }
    for (int k=0;k<4;k++){
        int nx=x+dx[k],ny=y+dy[k];
        if (nx >= 1 && nx <= n && ny >= 1 && ny <= m && a[nx][ny] != '#' && b[nx][ny] != 1){
            b[nx][ny]=1;
            dfs(nx,ny);
        }
    }
}

int main(){
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    dfs(1,1);
    if (f) cout << "Yes" << endl;
    else cout << "No" << endl;
}