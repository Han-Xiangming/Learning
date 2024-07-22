#include <iostream>
#include <queue>
using namespace std;
int main(){
    int n,m,cnt = 0;cin >> n >> m;
    queue<int> q;
    for(int i=1;i<=n;i++) q.push(i);
    while (q.size()>1){
        cnt++;
        if (cnt == m){
            q.pop();
            cnt = 0;
        } else {
            int tmp = q.front();
            q.pop();
            q.push(tmp);
        }
    }
    cout << q.front();
}