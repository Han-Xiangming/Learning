#include<iostream>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll k,n=0;
    cin >> k;
    for(double Sn=0;Sn<=k;++n,Sn+=1.0/n);
    cout << n;
    return 0;
}
