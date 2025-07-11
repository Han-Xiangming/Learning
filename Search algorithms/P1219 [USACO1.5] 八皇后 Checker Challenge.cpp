#include <iostream>
using namespace std;
int ans[14],check[3][28]={0},sum=0,n;
int read(){
    int x=0,f=1;
    char c=getchar();
    while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
    while(c>='0'&&c<='9'){x=(x<<1)+(x<<3)+c-48;c=getchar();}
    return x*f;
}
void dfs(int line){
    if (line > n){
        if (++sum>3) return;
        if (1) {
            for (int i=1;i<=n;i++) cout << ans[i] << " ";
            cout << '\n';
            return;
        }
    }
    for(int i=1;i<=n;i++){
        if(!check[0][i] && !check[1][line+i] && !check[2][line-i+n]){
            ans[line]=i;
            check[0][i] = check[1][line + i] = check[2][line - i + n] = 1;
            dfs(line+1);
            check[0][i] = check[1][line + i] = check[2][line - i + n] = 0;
        }
    }
}

int main(){
    n=read();
    dfs(1);
    cout << sum;
    return 0;
}