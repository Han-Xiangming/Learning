#include <iostream>
using namespace std;
int main(){
    int arr[] = {6,7,5,4,3,2,1,9,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0;i<n;i++){
        int max_idx = i;
        for (int j = i;j<n;j++){
            if (arr[max_idx]<arr[j]){
                max_idx = j;
            }
        }
        swap(arr[i],arr[max_idx]);
        cout << arr[i] << " ";
    }
}