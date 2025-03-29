#include <bits/stdc++.h>
using namespace std;
#define ios ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define _rep(i,a,b) for(int i=a;i<=b;i++)
#define file(x) freopen(x".in","r",stdin),freopen(x".out","w",stdout)

inline int read(){
    int x=0,f=1;char c=getchar();
    while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
    while(c>='0'&&c<='9'){x=x*10+c-'0';c=getchar();}
    return x*f;
}

inline void write(int x){
    if(x<0)putchar('-'),x=-x;
    if(x>9)write(x/10);
    putchar(x%10+'0');
}
int main(){
    ios
    _rep(i,1,10000){
        write(i);
        // cout << i;
    }
}
