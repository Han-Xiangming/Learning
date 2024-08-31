#include <iostream>
#include <string>
#include <unordered_map>
#define ll long long
using namespace std;
int main(){
    unordered_map<ll,string> mp;
    mp[1]="one";
    mp[2]="two";
    mp[3]="three";
    mp[4]="four";
    mp[5]="five";
    mp[6]="six";
    mp[7]="seven";
    mp[8]="eight";
    mp[9]="nine";
    mp[10]="ten";
    mp.erase(1);
    ll n;cin>>n;
    cout << mp[n] << endl;
}