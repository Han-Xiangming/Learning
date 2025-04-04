#include <iostream>
#include <vector>
using namespace std;

const long long MOD = 1e9 + 7; // 定义一个大质数作为模数

// 预先计算阶乘并存储在数组中，同时进行取模运算
vector<long long> precomputeFactorials(int maxN) {
	vector<long long> factorials(maxN + 1);
	factorials[0] = 1;
	for (int i = 1; i <= maxN; ++i) {
		factorials[i] = (factorials[i - 1] * i) % MOD;
	}
	return factorials;
}

// 计算逆元，用于处理除法取模
long long modInverse(long long a, long long m) {
	long long m0 = m, t, q;
	long long x0 = 0, x1 = 1;
	
	if (m == 1)
		return 0;
	
	while (a > 1) {
		q = a / m;
		t = m;
		m = a % m, a = t;
		t = x0;
		x0 = x1 - q * x0;
		x1 = t;
	}
	
	if (x1 < 0)
		x1 += m0;
	
	return x1;
}

// 计算排列数的函数，进行取模运算
long long permutation(const vector<long long>& factorials, int n, int m) {
	if (n < m) {
		return 0;
	}
	return (factorials[n] * modInverse(factorials[n - m], MOD)) % MOD;
}

// 计算组合数的函数，进行取模运算
long long combination(const vector<long long>& factorials, int n, int m) {
	if (n < m) {
		return 0;
	}
	long long denominator = (factorials[m] * factorials[n - m]) % MOD;
	return (factorials[n] * modInverse(denominator, MOD)) % MOD;
}

int main() {
	int maxN;
	cout << "请输入最大的 n 值：";
	cin >> maxN;
	
	vector<long long> factorials = precomputeFactorials(maxN);
	
	int numQueries;
	cout << "请输入查询的次数：";
	cin >> numQueries;
	
	for (int i = 0; i < numQueries; ++i) {
		int n, m;
		cout << "请输入第 " << i + 1 << " 次查询的 n 和 m 的值（n >= m）：";
		cin >> n >> m;
		
		long long permutationResult = permutation(factorials, n, m);
		long long combinationResult = combination(factorials, n, m);
		
		cout << "排列数 A(" << n << ", " << m << ") 对 " << MOD << " 取模的值为：" << permutationResult << endl;
		cout << "组合数 C(" << n << ", " << m << ") 对 " << MOD << " 取模的值为：" << combinationResult << endl;
	}
	
	return 0;
}    
