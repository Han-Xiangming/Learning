#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,L,R,ans=0;
    cin>>n>>L>>R;
    for (int i = L;i<=R;i++){
        ans = max(ans,i%n);
    }
    cout << ans << endl;
}