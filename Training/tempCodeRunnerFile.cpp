#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  double c;
  cin >> c;
  float f = (c * 9 / 5) + 32;
    cout << fixed << setprecision(2) << f << endl;
  return 0;
}