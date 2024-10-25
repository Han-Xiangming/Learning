#include<bits/stdc++.h>
#define file(x) freopen(x".in","r",stdin),freopen(x".out","w",stdout);
using namespace std;
int T,m,a,b,c,d,k,t;
int gcd(int a,int b) {
    return b?gcd(b,a%b):a;
}
int handle(){
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    
	cin>>a>>b>>c;
	if(a<0) a=-a,b=-b,c=-c;
	d=b*b-4*a*c,k=1;
	if(d<0){
        cout<<"NO\n";
        return 0;
    }
	for(int i=2;i*i<=d;i++) while(d%(i*i)==0) k*=i,d/=(i*i);
	if(d==0||d==1){
		t=abs(gcd(2*a,-b+k*d));
		cout<<(-b+k*d)/t;
		if(2*a/t!=1) cout<<'/'<<2*a/t;
		cout<<'\n';
		return 0;
	}
	//-b/2a+k*sqrt(d)/2a
	t=abs(gcd(-b,2*a));
	if(-b/t==0) goto g;
	cout<<-b/t;
	if(2*a/t!=1) cout<<'/'<<2*a/t;
	cout<<'+';
	g:
	t=abs(gcd(k,2*a));
	if(k/t!=1) cout<<k/t<<'*';
	cout<<"sqrt("<<d<<')';
	if(2*a/t!=1) cout<<'/'<<2*a/t;
	cout<<'\n';
	return 0;
}
int main(){
    // file(uqe);
	for(cin>>T>>m;T;--T) handle();
	return 0;
}
