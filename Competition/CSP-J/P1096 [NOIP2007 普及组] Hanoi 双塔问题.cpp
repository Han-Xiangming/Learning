#include <bits/stdc++.h>
#define file(x) freopen(#x".in","r",stdin),freopen(#x".out","w",stdout);
#define optimition ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main()
{
    optimition;
    // file(1)
    int n;
    cin>>n;
    stringstream s;
    s.precision(0);
    s<<fixed<<pow(2.0L,n+1); 
    string a=s.str();
    a[a.length()-1]--;
    a[a.length()-1]--;
    cout<<a<<endl;
    return 0;
}