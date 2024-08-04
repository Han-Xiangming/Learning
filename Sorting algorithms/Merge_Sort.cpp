#include <iostream>
#include <vector> 
using namespace std;

// 合并两个有序数组
void merge(vector<int>& vec, int left, int right) {
    // 初始化指针
    int i = left, j = mid + 1, k = 0;
    // 创建临时数组用于存储合并结果
    vector<int> temp(right - left + 1);
    // 当两个数组都没有遍历完时，比较元素大小并合并
    while (i <= mid && j <= right) {
        if (vec[i] <= vec[j]) {
            temp[k++] = vec[i++];
        } else {
            temp[k++] = vec[j++];
        }
    }
    // 处理剩余元素
    while (i <= mid) {
        temp[k++] = vec[i++];
    }
    while (j <= right) {
        temp[k++] = vec[j++];
    }
    // 将合并后的结果复制回原数组
    for (int i = 0; i < right - left + 1; i++) {
        vec[left + i] = temp[i];
    }
    return;
}

// 使用归并排序对数组进行排序
void mergeSort(vector<int>& vec, int left, int right) {
    if (left >= right) return;
    int mid = (left + right) / 2;
    mergeSort(vec, left, mid);
    mergeSort(vec, mid + 1, right);
    merge(vec, left, mid, right);
}

int main() {
    vector<int> vec = { 5, 4, 3, 2, 1 };
    int len = vec.size();
    // 调用归并排序函数对数组进行排序
    mergeSort(vec, 0, len - 1);
    // 打印排序后的结果
    for (const int& i : vec) {
        cout << i << " ";
    }
    return 0;
}