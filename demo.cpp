#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,a[105],dp[105];
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    int ans=0;
    for (int i=1;i<=n;i++){
        dp[i]=1;
        for (int j=1;j<i;j++){
            if (a[j]<a[i]) dp[i]=max(dp[i],dp[j]+1);
        }
        ans=max(ans,dp[i]);
    }
    cout<<ans<<endl;
}
