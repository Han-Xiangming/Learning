#include <bits/stdc++.h>
using namespace std;
int a[101][101],b[101][101],n;
int di[5]={-1,0,1,0},dj[5]={0,1,0,-1};
bool f=false;
void dfs(int i,int j){
    if (a[i][j]==2){
        f=true;
        return;
    }
    for (int k=0;k<4;k++){
        int nx=i+di[k],ny=j+dj[k];
        if (nx>=1 && nx<=n && ny>=1 && ny<=n && a[nx][ny]!=1 && b[nx][ny]==0){
            b[nx][ny]=1;
            dfs(nx,ny);
        }
    }
}

int main(){
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    if (a[1][1]==2){
        cout << "yes";
        return 0;
    } else {
        dfs(1,1);
        cout << (f?"yes":"no");
    }
}