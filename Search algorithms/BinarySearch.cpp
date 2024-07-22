#include <iostream>
using namespace std;
int BinarySearch(int arr[],int target,int length){
    int left = 0;
    int right = length-1;
    while (left<=right){
        int mid = left + (right-left)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return -1; //if not found
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int target = 9;
    int result = BinarySearch(arr,target,sizeof(arr)/sizeof(arr[0]));
    if(result==-1){
        cout<<"Element not found";
    }
    else{
        cout<<"Element found at index "<<result;
    }
    return 0;
}