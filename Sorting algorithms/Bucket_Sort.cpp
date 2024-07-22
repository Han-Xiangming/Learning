#include <iostream>
using namespace std;
int main(){
    int a[101] = {},n,s;
    for (int i = 0;i<n;i++){
        cin >> s;a[s]++;
    }
    for (int i = 0;i<101;i++){
        for (int j = 0;j<a[i];j++){
            cout << i << " ";
        }
    }
}