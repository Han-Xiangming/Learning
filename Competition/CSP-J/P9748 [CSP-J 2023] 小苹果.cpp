#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define file(x) freopen(#x".in",'r',stdin),freopen(#x".out",'w',stdout);
#define optimition ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main(){
    optimition;
    // file(apple);
    ll n,day=0,ans=0;
    cin>>n;
    while (n>0){
        day++;
        if (!ans && n%3==1) ans=day;
        n-=ceil(n/3.0);
    }
    cout << day << " " << ans;
    return 0;
}