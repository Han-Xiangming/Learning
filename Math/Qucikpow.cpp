#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define file(x) freopen(#x".in","r",stdin),freopen(#x".out","w",stdout);

ll quickpow(ll a, ll b, ll mod) {
    ll ret = 1;
    while(b){
        if(b%2==1) ret = (ret*a)%mod;
        a = (a*a)%mod;
        b /= 2;
    }return ret;
}

int main(){
    ll a, b, mod;
    cin >> a >> b >> mod;
    cout << quickpow(a, b, mod) << endl;
    return 0;
}