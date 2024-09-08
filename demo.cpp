#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,x;cin>>n;
    vector<int> v(n);
    for (int i = 1 ;i<=n;i++){
        cin>>n;
        v[i]++;
    }
    for (int i = 0;i<n;i++) if (v[i]!=0) for (int j=0;j<v[i];j++) cout<<i<<" ";
}