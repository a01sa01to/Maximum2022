#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int left = a + b;
  int right = c + d;

  if (left < right) {
    cout << "Right" << endl;
  }
  if (left == right) {
    cout << "Balanced" << endl;
  }
  if (left > right) {
    cout << "Left" << endl;
  }
}