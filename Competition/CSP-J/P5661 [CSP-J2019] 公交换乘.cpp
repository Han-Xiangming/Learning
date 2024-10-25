#include <bits/stdc++.h>
using namespace std;
#define file(x) freopen(#x".in",'r',stdin),freopen(#x".out",'w',stdout);
#define optimition ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
struct ticket
{
    ll price,time;
    bool used = 0;
}t[100010];
int main(){
    optimition;
    ll n,way,price,time;
    ll ans=0,cnt=0,idx=1;
    cin >> n;
    for (int i = 1;i<=n;i++){
        cin >> way;
        if (!way){
            cnt++;
            cin >> t[cnt].price >> t[cnt].time;
            ans += t[cnt].price;
        } else {
            cin >> price >> time;
            bool flag = 0;
            while (time - t[idx].time > 45) idx++;
            for (int j = idx;j<=cnt;j++){
                if (price <= t[j].price && !t[j].used){
                    t[j].used = 1;
                    flag = 1;
                    break;
                }
            }
            if (!flag) ans += price;
        }
    }
    cout << ans << endl;
    return 0;
}
