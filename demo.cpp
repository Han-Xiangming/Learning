#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n1,n2,a[105],b[105],dp[105][105];
    cin>>n1;for (int i=1;i<=n1;i++) cin>>a[i];
    cin>>n2;for (int i=1;i<=n2;i++) cin>>b[i];
    int ans=0;
    for (int i=1;i<=n1;i++){
        for (int j=1;j<=n2;j++){
            dp[i][j]=(a[i]==b[j])?dp[i-1][j-1]+1:max(dp[i-1][j],dp[i][j-1]);
            ans=max(ans,dp[i][j]);
        }
        
    }
    cout<<ans<<endl;
}
