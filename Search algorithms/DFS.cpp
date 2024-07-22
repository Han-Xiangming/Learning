#include<iostream>
using namespace std;
int a[105][105],b[105][105], n;
bool f=false;
int di[5] = {-1,0,1,0},dj[5] = {0,1,0,-1}; // 4 directions
void dfs(int i, int j)
{
    if(a[i][j]==2)
    {
        f=true;
        return; 
    }
    for (int k = 0; k < 4; k++){
        int ni = i + di[k], nj = j + dj[k];
        if(ni >= 1 && ni <= n && nj >= 1 && nj <= n && a[ni][nj] != 1 && b[ni][nj] == 0)
        {
            b[ni][nj] = 1;
            dfs(ni,nj);
            b[ni][nj] = 0;
        }
    }
} 
int main()
{
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    if(a[1][1] == 2)
    {
        cout << "yes";
        return 0;
    } else {
        b[1][1] = 1;
        dfs(1,1);
        cout << (f ? "yes" : "no");
    }
}