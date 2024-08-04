#include <iostream>
#include <vector>
using namespace std;

// 冒泡排序函数，用于对整数向量进行排序
void Bubble_Sort(vector<int> &arr)
{
    int n = arr.size();
    // 遍历数组，每次循环将当前最大元素移至正确位置
    for (int i = 0; i < n - 1; i++)
    {
        // 内部循环，通过比较和交换，将较大元素向右移动
        for (int j = 0; j < n - i - 1; j++)
        {
            // 当前元素大于相邻元素时，进行交换
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main(){
    // 获取输入的整数个数
	int n;cin>>n;
    // 创建一个具有n个元素的整数向量
	vector<int> arr(n);
    // 读取n个整数并存储在向量中
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    // 调用冒泡排序函数对向量进行排序
	Bubble_Sort(arr);
    // 遍历排序后的向量并打印每个元素
	for (const auto &i : arr){
		cout<<i<<" ";
	}
}