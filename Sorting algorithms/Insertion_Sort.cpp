#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr) {
    for (unsigned int i = 1; i < arr.size(); i++) {
        int base = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > base) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = base;
    }
}
int main() {
    vector<int> arr = {5, 4, 3, 2, 1};
    insertionSort(arr);
    for (const auto &i : arr){
        cout << i << " ";
    }
    return 0;
}