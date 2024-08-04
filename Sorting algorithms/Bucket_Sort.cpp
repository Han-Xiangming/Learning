#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // ����һ�� vector ���ڴ洢ÿ��Ͱ�е�Ԫ������
    vector<int> buckets(101, 0); // Ͱ�Ĵ�СΪ 101

    // ��ȡ���ݲ�����Ͱ
    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        if (s >= 0 && s <= 100) { // ȷ����������Ч��Χ��
            buckets[s]++;
        } else {
            cout << "Invalid input: " << s << ". Skipping this element." << endl;
        }
    }

    // ���������Ԫ��
    for (int i = 0; i < buckets.size(); i++) {
        for (int j = 0; j < buckets[i]; j++) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}