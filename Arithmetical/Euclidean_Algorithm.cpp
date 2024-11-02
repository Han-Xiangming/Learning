#include <bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(ll a, ll b){
    return (!b ? a : gcd(b,a%b));
}

int main(){
    ll a,b; cin>>a>>b;
    cout<< gcd(a,b) <<endl;
    return 0;
}