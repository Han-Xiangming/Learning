#include <bits/stdc++.h>
using namespace std;
#define int long long
int quick_pow(int a,int b,int m){
	int ret=1;
	while(b){
		if(b&1) ret=ret*a%m;
		b >>= 1;
		a =a*a%m;
	}
	return ret;
}

signed main(){
	int a,b,m;
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> a >> b >> m;
	printf("%lld^%lld mod %lld=%lld",a,b,m,quick_pow(a,b,m));
	return 0;
}
