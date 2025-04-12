#include <bits/stdc++.h>
using namespace std;
#define _rep(i,j,k) for(int i=(j);i<=(k);i++)
const int N=105;
int m,n,a[N][N],dis[N][N];
int dx[]={0,-1,1,0,0},dy[]={0,0,0,-1,1};
void dfs(int x,int y,int s,bool magic){
    if(s<dis[x][y]) dis[x][y]=s;
    else return;
    _rep(i,1,4){
        int tx=x+dx[i],ty=y+dy[i];
        if(a[x][y]==a[tx][ty] && a[x][y]!=-1){
            dfs(tx,ty,s,false);
        } else if (a[x][y]+a[tx][ty]==1){
            dfs(tx,ty,s+1,false);
        } else if (magic == false){
            a[tx][ty]=a[x][y];
            dfs(tx,ty,s+2,true);
            a[tx][ty]=-1;
        }
    }
}

int main(){
    cin>>m>>n;
    memset(a,-1,sizeof a);
    memset(dis,0x3f,sizeof dis);
    _rep(i,1,n){
        int x,y,c;
        cin>>x>>y>>c;
        a[x][y]=c;
    }
    dfs(1,1,0,false);
    if(dis[m][m]==0x3f3f3f3f) cout << -1;
    else cout << dis[m][m];
    return 0;
}