#include <iostream>
using namespace std;

// 计算第 n 个卡特兰数
long long catalan(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	long long f[n + 1];
	f[0] = 1;
	f[1] = 1;
	for (int i = 2; i <= n; ++i) {
		f[i] = f[i - 1] * (4 * i - 2) / (i + 1);
	}
	return f[n];
}

int main() {
	int n;
	cout << "请输入一个非负整数 n 来计算第 n 个卡特兰数: ";
	cin >> n;
	if (n < 0) {
		cout << "输入的 n 必须是非负整数。" << endl;
	} else {
		cout << "第 " << n << " 个卡特兰数是: " << catalan(n) << endl;
	}
	return 0;
}    
