#include <iostream>
#include <string>
using namespace std;
const int LEN = 1004;

int a[LEN], b[LEN], c[LEN];

void clear(int a[]) {
  for (int i = 0; i < LEN; ++i) a[i] = 0;
}

void read(int a[]) {
  string s;
  cin >> s;

  clear(a);

  int len = s.length();
  for (int i = 0; i < len; ++i) a[len - i - 1] = s[i] - '0';
}

void print(int a[]) {
  int i;
  for (i = LEN - 1; i >= 1; --i) if (a[i] != 0) break;
  for (; i >= 0; --i) cout << a[i];
  cout << endl;
}

void sub(int a[], int b[], int c[]) {
  clear(c);

  for (int i = 0; i < LEN - 1; ++i) {
    c[i] += a[i] - b[i];
    if (c[i] < 0) {
      c[i + 1] -= 1;
      c[i] += 10;
    }
  }
}

int main() {
  read(a);
  read(b);

  sub(a, b, c);
  print(c);

  return 0;
}