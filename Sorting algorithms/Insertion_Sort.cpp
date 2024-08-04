#include <iostream>
#include <vector>
using namespace std;

// 插入排序函数，对一个整数向量进行排序
void insertionSort(vector<int> &arr) {
    for (unsigned int i = 1; i < arr.size(); i++) {
        // 储存当前元素，用于后续的插入位置寻找
        int base = arr[i];
        // 比较并移动基准元素到正确的位置
        int j = i - 1;
        while (j >= 0 && arr[j] > base) {
            arr[j + 1] = arr[j];
            j--;
        }
        // 插入基准元素到找到的位置
        arr[j + 1] = base;
    }
}

int main() {
    // 初始化一个未排序的向量
    vector<int> arr = {5, 4, 3, 2, 1};
    // 调用插入排序函数对向量进行排序
    insertionSort(arr);
    // 遍历并输出排序后的向量元素
    for (const auto &i : arr){
        cout << i << " ";
    }
    return 0;
}