#include <iostream>
#include <cstring>
using namespace std;
int st[10][7]={
    {1,1,1,1,1,1,0}, //0
    {0,1,1,0,0,0,0}, //1
    {1,1,0,1,1,0,1}, //2
    {1,1,1,1,0,0,1}, //3
    {0,1,1,0,0,1,1}, //4
    {1,0,1,1,0,1,1}, //5
    {1,0,1,1,1,1,1}, //6
    {1,1,1,0,0,0,0}, //7
    {1,1,1,1,1,1,1}, //8
    {1,1,1,1,0,1,1}  //9
};

int main(){
    int n,cnt;cin >> n;
    string s1,s2;
    cin >> s1 >> s2;
    for (int i=0;i<n;i++){
        for (int j=0;j<7;j++){
            if (st[s1[i]-'0'][j] != st[s2[i]-'0'][j]){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}