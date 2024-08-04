#include <iostream>
#include <vector>
using namespace std;

// 二分查找函数
int BinarySearch(const vector<int>& vec, int target){
    int left = 0;
    int right = vec.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (vec[mid] == target) {
            return mid;
        } 
        else if (vec[mid] < target) {
            left = mid + 1;
        } 
        else {
            right = mid - 1;
        }
    }
    return -1; // 如果未找到目标值
}

int main(){
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 9;
    int result = BinarySearch(vec, target);
    
    if (result == -1) {
        cout << "Element not found" << endl;
    } 
    else {
        cout << "Element found at index " << result << endl;
    }
    return 0;
}