#include <bits/stdc++.h>
using namespace std;
int n,x,ans;
const int MAX_R = 100006; // 设定一个足够大的值来覆盖r_i的范围

int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int mp[MAX_R];
	while(n--){
		cin>>x;
		ans=max(ans,++mp[x]);
	}
	cout << ans;
	return 0;
}

