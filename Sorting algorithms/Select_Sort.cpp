#include <iostream>
#include <vector>
using namespace std;

int main() {
    // ��ʼ��һ����������
    vector<int> vec = {6, 7, 5, 4, 3, 2, 1, 9, 8};
    // ��ȡ�����Ĵ�С
    int n = vec.size();

    // ��������������ѡ������
    for (int i = 0; i < n; i++) {
        // ��ʼ����ǰ����λ�õ�����
        int max_idx = i;
        // Ѱ�ҵ�ǰλ��֮������ֵ��������
        for (int j = i; j < n; j++) {
            if (vec[max_idx] < vec[j]) {
                max_idx = j;
            }
        }
        // ���ҵ������ֵ�뵱ǰλ�õ�Ԫ�ؽ���
        swap(vec[i], vec[max_idx]);
        // �����ǰ����λ�õ�Ԫ��
        cout << vec[i] << " ";
    }

    // ���������˳�
    return 0;
}