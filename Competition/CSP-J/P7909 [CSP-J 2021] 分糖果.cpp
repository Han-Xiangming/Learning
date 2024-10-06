#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,L,R,ans=0;
    cin>>n>>L>>R;
    if (L/n != R/n) ans = n-1;
    else ans = R%n;
    cout << ans << endl;
}