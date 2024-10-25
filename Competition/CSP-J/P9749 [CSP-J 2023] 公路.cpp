#include <bits/stdc++.h>
using namespace std;
#define file(x) freopen(#x".in",'r',stdin),freopen(#x".out",'w',stdout);
#define optimition ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
ll v[100010],a[100010];
ll n,d,ans=0;
int main(){
    optimition;
    // file(road);
    cin >> n >> d;
    for (int i = 1;i<n;i++) cin >> v[i];
    for (int i = 1;i<=n;i++) cin >> a[i];
    ll dis=0,price=a[1];
    for (int i= 1;i<n;i++){
        if (dis<v[i]){
	    int x = ceil(1.0*(v[i]-dis)/d);
	    dis += d*x;
	    ans += x*price;
	}
	dis -= v[i];
	price = min(price,a[i+1]);
    }
    cout << ans;
    return 0;
}
