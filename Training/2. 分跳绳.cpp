// 目标：学校新买来m根跳绳，每个班分n根，最多可以分给几个班的同学，还剩多少根？（m>=n）（4.1.9）
// 输入描述: 两个整数，用空格隔开，分别代表总共采购的跳绳数量以及每个班级分到的跳绳数量
// 输出描述: 两个整数，用空格隔开，第一个整数代表可以分到的班级的数量，第二个整数代表剩余的跳绳数量
// 示例1:
// 输入：100 30
// 输出： 3 10
#include <iostream>
using namespace std;
int main() {
  int m, n;
  cin >> m >> n;
  int res = m / n;
  int left = m % n;
  cout << res << " " << left << endl;
  return 0;
}