#include<iostream>
using namespace std;
#define file(x) freopen(#x".in","r",stdin),freopen(#x".out","w",stdout);
#define ll long long
int main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll k,n=0;
    cin >> k;
    for(double Sn=0;Sn<=k;++n,Sn+=1.0/n);
    cout << n;
    return 0;
}
