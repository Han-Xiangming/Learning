#include <bits/stdc++.h>
using namespace std;
int w[105], val[105];
int dp[105][1005];
int main(){
    int t, m, res = -1;
    cin >> t >> m;
    for (int i = 1; i <= m; i++) cin >> w[i] >> val[i];
    for (int i = 1; i <= m; i++)
        for (int j = t; j >= 0; j--){
            if (j >= w[i]) dp[i][j] = max(dp[i - 1][j - w[i]] + val[i], dp[i - 1][j]);
            else dp[i][j] = dp[i - 1][j];
        }
    cout << dp[m][t];
    return 0;
}