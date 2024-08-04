#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 初始化一个整数向量
    vector<int> vec = {6, 7, 5, 4, 3, 2, 1, 9, 8};
    // 获取向量的大小
    int n = vec.size();

    // 遍历向量，进行选择排序
    for (int i = 0; i < n; i++) {
        // 初始化当前遍历位置的索引
        int max_idx = i;
        // 寻找当前位置之后的最大值及其索引
        for (int j = i; j < n; j++) {
            if (vec[max_idx] < vec[j]) {
                max_idx = j;
            }
        }
        // 将找到的最大值与当前位置的元素交换
        swap(vec[i], vec[max_idx]);
        // 输出当前遍历位置的元素
        cout << vec[i] << " ";
    }

    // 程序正常退出
    return 0;
}