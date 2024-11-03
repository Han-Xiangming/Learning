#include <bits/stdc++.h>
using namespace std;
#define file(x) freopen(#x".in","r",stdin),freopen(#x".out","w",stdout);
#define ll long long
#define pb push_back

vector<int> v;

bool cmp(int a,int b){
    return a>b;
}
int main(){
    // file(a);
    ll n;
    cin>>n;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        v.pb(x);
    }
    sort(v.begin(),v.end(),cmp);
    auto new_end = unique(v.begin(),v.end());
    v.erase(new_end,v.end());
    for(auto i:v) cout<<i<<" ";
    cout<<endl;
}