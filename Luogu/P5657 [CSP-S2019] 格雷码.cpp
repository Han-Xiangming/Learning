//#include<iostream>
//int n;
//unsigned long long k;
//int main(){
//	std::cin>>n>>k;
//	k^=k>>1;
//	while(~--n)std::cout<<(k>>n&1);
//}
#include <iostream>
#include <string>

std::string gray_code(int n, long long k) {
	std::string result(n, '0');
	for (int i = n - 1; i >= 0; --i) {
		long long half = 1LL << i;
		if (k >= half) {
			result[n - i - 1] = '1';
			k = (1LL << (i + 1)) - k - 1;
		}
	}
	return result;
}

int main() {
	int n;
	long long k;
	std::cin >> n >> k;
	std::cout << gray_code(n, k) << std::endl;
	return 0;
}

