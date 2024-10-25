#include <bits/stdc++.h>
using namespace std;
#define file(x) freopen(#x".in",'r',stdin),freopen(#x".out",'w',stdout);
#define optimition ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
ll n,m,dp[35][35];
int main(){
    optimition;
    cin >> n >> m,dp[0][1] = 1;
    for (int i = 1; i <= m; i++){
        for (int j = 1;j<=n; j++){
            if (j == 1) dp[i][j] = dp[i-1][j+1]+dp[i-1][n];
            else if (j == n) dp[i][j] = dp[i-1][n-1]+dp[i-1][1];
            else dp[i][j] = dp[i-1][j-1]+dp[i-1][j+1];
        }
    }
    cout << dp[m][1];
    return 0;
}