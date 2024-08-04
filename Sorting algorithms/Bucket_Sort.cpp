#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // 创建一个 vector 用于存储每个桶中的元素数量
    vector<int> buckets(101, 0); // 桶的大小为 101

    // 读取数据并更新桶
    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        if (s >= 0 && s <= 100) { // 确保输入在有效范围内
            buckets[s]++;
        } else {
            cout << "Invalid input: " << s << ". Skipping this element." << endl;
        }
    }

    // 输出排序后的元素
    for (int i = 0; i < buckets.size(); i++) {
        for (int j = 0; j < buckets[i]; j++) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}