#include <iostream>
#include <vector> 
using namespace std;

// �ϲ�������������
void merge(vector<int>& vec, int left, int right) {
    // ��ʼ��ָ��
    int i = left, j = mid + 1, k = 0;
    // ������ʱ�������ڴ洢�ϲ����
    vector<int> temp(right - left + 1);
    // ���������鶼û�б�����ʱ���Ƚ�Ԫ�ش�С���ϲ�
    while (i <= mid && j <= right) {
        if (vec[i] <= vec[j]) {
            temp[k++] = vec[i++];
        } else {
            temp[k++] = vec[j++];
        }
    }
    // ����ʣ��Ԫ��
    while (i <= mid) {
        temp[k++] = vec[i++];
    }
    while (j <= right) {
        temp[k++] = vec[j++];
    }
    // ���ϲ���Ľ�����ƻ�ԭ����
    for (int i = 0; i < right - left + 1; i++) {
        vec[left + i] = temp[i];
    }
    return;
}

// ʹ�ù鲢����������������
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
    // ���ù鲢�������������������
    mergeSort(vec, 0, len - 1);
    // ��ӡ�����Ľ��
    for (const int& i : vec) {
        cout << i << " ";
    }
    return 0;
}