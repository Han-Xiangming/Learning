#include <iostream>
using namespace std;
// πÈ≤¢≈≈–Ú
void merge(int arr[], int left, int mid, int right) {
    int i = left, j = mid + 1, k = 0;
    int* temp = new int[right - left + 1];
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }
    while (i <= mid) {
        temp[k++] = arr[i++];
    }
   while (j <= right) {
        temp[k++] = arr[j++];
    }
    for (int i = 0; i < right - left + 1; i++) {
        arr[left + i] = temp[i];
    }
    delete[] temp;
    return;
}
void mergeSort(int arr[], int left, int right) {
    if (left >= right) return;
    int mid = (left + right) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}
int main() {
    int arr[] = { 5, 4, 3, 2, 1 };
    int len = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, len - 1);
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}