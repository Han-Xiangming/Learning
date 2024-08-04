#include <iostream>
#include <vector>
using namespace std;

// ��������������һ������������������
void insertionSort(vector<int> &arr) {
    for (unsigned int i = 1; i < arr.size(); i++) {
        // ���浱ǰԪ�أ����ں����Ĳ���λ��Ѱ��
        int base = arr[i];
        // �Ƚϲ��ƶ���׼Ԫ�ص���ȷ��λ��
        int j = i - 1;
        while (j >= 0 && arr[j] > base) {
            arr[j + 1] = arr[j];
            j--;
        }
        // �����׼Ԫ�ص��ҵ���λ��
        arr[j + 1] = base;
    }
}

int main() {
    // ��ʼ��һ��δ���������
    vector<int> arr = {5, 4, 3, 2, 1};
    // ���ò�����������������������
    insertionSort(arr);
    // �������������������Ԫ��
    for (const auto &i : arr){
        cout << i << " ";
    }
    return 0;
}