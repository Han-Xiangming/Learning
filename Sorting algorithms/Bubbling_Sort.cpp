#include <iostream>
using namespace std;
int
main ()
{
  int arr[] = { 6, 7, 5, 4, 3, 2, 1, 9, 8 };
  int n = sizeof (arr) / sizeof (arr[0]);
  for (int i = 0; i < n - 1; i++){
	  int flag = 0;
	  for (int j = 0; j < n - i - 1; j++){
		  if (arr[j] < arr[j + 1])
			{
			  flag = 1;
			  swap (arr[j], arr[j + 1]);
			}
		}
	  if (flag == 0){
		  break;
		}
	}
  for (int i = 0; i < n; i++){
	  cout << arr[i] << " ";
	}
}