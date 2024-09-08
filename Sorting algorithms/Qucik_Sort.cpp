#include <iostream>
#include <vector> 
using namespace std;


void quickSort(int l,int r,vector<int>& arr){
    if (l>=r) return;
    int pivot = arr[l];
    int i = l, j = r;
    while (i < j) {
        while (arr[i] <= pivot && i < r) i++;
        while (arr[j] > pivot && j > l) j--;
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[l], arr[j]);
    quickSort(l, j - 1, arr);
    quickSort(j + 1, r, arr);
}

int main() {
    vector<int> vec = {10, 7, 8, 9, 1, 5};
    int n = vec.size();
    quickSort(0, n - 1, vec);
    cout << "Sorted array: \n";
    for (const auto& i : vec) cout << i << " ";
    return 0;
}