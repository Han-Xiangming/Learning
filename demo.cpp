#include <bits/stdc++.h>
using namespace std;
queue<int> q;
int main(){
    // �ŶӴ���
    int n;
    cin >> n;
    for (int i = 1;i<=n;i++){
        q.push(i);
    }
    while(!q.empty()){
        int x = q.front();
        cout << x << " ";
        q.pop();
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
    return 0;
}