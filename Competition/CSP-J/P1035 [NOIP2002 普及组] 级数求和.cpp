#include<iostream>
using namespace std;
#define file(x) freopen(#x".in","r",stdin),freopen(#x".out","w",stdout);
#define optimition ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
int main() {
    optimition;
    ll k,n=0;
    cin >> k;
    for(double Sn=0;Sn<=k;++n,Sn+=1.0/n);
    cout << n;
    return 0;
}
