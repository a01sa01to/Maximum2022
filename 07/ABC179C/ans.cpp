#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int n;
  cin >> n;

  // 答えを求める
  int ans = 0;
  for (int a = 1; a <= n; a++) {
    for (int b = 1; a * b <= n; b++) {
      int c = n - a * b;
      if (c > 0) {
        ans++;
      }
    }
  }

  // 出力
  cout << ans << endl;

  return 0;
}