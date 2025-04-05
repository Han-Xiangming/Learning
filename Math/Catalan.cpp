#include <iostream>
using namespace std;
int read(){
	int x=0,f=1;
	char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
	while(c>='0'&&c<='9'){x=(x<<1)+(x<<3)+c-'0';c=getchar();}
	return x*f;
}

inline void write(int x){
    if(x<0)putchar('-'),x=-x;
    if(x>9)write(x/10);
    putchar(x%10+'0');
}

long long catalan(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	long long f[n + 1];
	f[0] = 1;
	f[1] = 1;
	for (int i = 2; i <= n; ++i) {
		f[i] = f[i - 1] * (4 * i - 2) / (i + 1);
	}
	return f[n];
}

int main() {
	int n=read();
	write(catalan(n));
	return 0;
}
