#include <bits/stdc++.h>
using namespace std;

// 计算阶乘的函数
long long factorial(int num) {
	long long result = 1;
	for (int i = 1; i <= num; ++i) {
		result *= i;
	}
	return result;
}

// 计算排列数的函数
long long permutation(int n, int m) {
	if (n < m) {
		return 0;
	}
	return factorial(n) / factorial(n - m);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	
	long long result = permutation(n, m);
	cout << result << endl;
	
	return 0;
}    
