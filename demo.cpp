<<<<<<< HEAD
=======
#include <iostream>
using namespace std;

int main() {
    int n, L, R;
    cin >> n >> L >> R;

    int max = R % n;

    if (max != n - 1) {
        for (int k = R; k >= L; --k) {
            if (k % n == n - 1) {
                max = n - 1;
                break;
            }
        }
    }

    cout << max << endl;
    return 0;
}
>>>>>>> a3461677dbdc974564c8f91a4092eebc960ab43c
