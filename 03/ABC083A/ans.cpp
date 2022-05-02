#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int left = a + b;   // 天秤の左にあるおもり
  int right = c + d;  // 天秤の右にあるおもり

  // 出力
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