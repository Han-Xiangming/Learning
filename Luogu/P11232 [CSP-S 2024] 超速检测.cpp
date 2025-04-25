//简化题意
//给定 n 辆车，每辆车有加速度，起始速度和进场位置。
//给定一条 [0,L] 的公路。
//给定 m 个测速仪，保证给定位置升序排列，且测速仪都在公路上。
//你需要求出如下两个问题的答案。
//当所有测速仪都打开时，有多少个超速的车辆被检测到。
//最多可以关闭多少测速仪，使得在所有测速仪都打开时能被检测到的超速的车辆仍能被检测到。


#include <bits/stdc++.h>
using namespace std;
#define file(x) freopen(#x".in","r",stdin),freopen(#x".out","w",stdout);

int calcv(int a,int t,int v0){
	return (v0+a*t);
}
void solve(){
	
}


int main(){
	int T;
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> T;
	while(T--){
		int n,m,L,V;
		cin>>n>>m>>L>>V;
		int s[3][n+1];
		int cs[m+1];
		for(int i = 1;i<=n;i++){
			cin >> s[0][i] >> s[1][i] >> s[2][i];
			
		}
		for(int i = 1;i<=m;i++){
			cin >> cs[m+1];
		}
		solve();
	}
}
