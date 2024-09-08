#include <vector>
#include <iostream>
using namespace std;
vector<bool> sieveOfEratosthenes(int n) {
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false; // 0 �� 1 ��������
    for (int p = 2; p * p <= n; p++) {
        if (prime[p]) {
            // ���p�����б���Ϊ����
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    return prime;
}

int main() {
    int n = 100;
    vector<bool> primes = sieveOfEratosthenes(n);
    for (int i = 2; i <= n; i++)
        if (primes[i])
            cout << i << " ";
    return 0;
}