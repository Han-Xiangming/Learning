#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i = 1; i < len; i++) {
        int base = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > base) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = base;
    }
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}