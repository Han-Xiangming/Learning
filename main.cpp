#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string s; cin >> s;
    int length = s.length();
    cout << length << endl;
    for (int i = 0; i < length; i++){
        cout << s[i] ;
    }
    cout << endl;
    for (int i = length-1; i >= 0; i--){
        cout << s[i] ;
    }

}