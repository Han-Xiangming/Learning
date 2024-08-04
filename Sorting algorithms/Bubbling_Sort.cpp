#include <iostream>
#include <vector>
using namespace std;

// ð�������������ڶ�����������������
void Bubble_Sort(vector<int> &arr)
{
    int n = arr.size();
    // �������飬ÿ��ѭ������ǰ���Ԫ��������ȷλ��
    for (int i = 0; i < n - 1; i++)
    {
        // �ڲ�ѭ����ͨ���ȽϺͽ��������ϴ�Ԫ�������ƶ�
        for (int j = 0; j < n - i - 1; j++)
        {
            // ��ǰԪ�ش�������Ԫ��ʱ�����н���
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main(){
    // ��ȡ�������������
	int n;cin>>n;
    // ����һ������n��Ԫ�ص���������
	vector<int> arr(n);
    // ��ȡn���������洢��������
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    // ����ð����������������������
	Bubble_Sort(arr);
    // ������������������ӡÿ��Ԫ��
	for (const auto &i : arr){
		cout<<i<<" ";
	}
}