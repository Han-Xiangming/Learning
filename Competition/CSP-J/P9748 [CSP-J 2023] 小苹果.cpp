#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,day=0,ans=0;
    cin>>n;
    while (n>0){
        day++;
        if (ans==0 && n%3==1) ans=day;
        n-=ceil(n/3.0);
    }
    cout << day << " " << ans;
    return 0;
}