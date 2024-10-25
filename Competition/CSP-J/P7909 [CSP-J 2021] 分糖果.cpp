#include <bits/stdc++.h>
using namespace std;
#define file(x) freopen(#x".in",'r',stdin),freopen(#x".out",'w',stdout);
#define optimition ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
int main(){
    optimition;
    file(candy);
    ll n,L,R,ans=0;
    cin>>n>>L>>R;
    if (L/n != R/n) ans = n-1;
    else ans = R%n;
    cout << ans << endl;
}