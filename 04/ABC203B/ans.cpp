#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int n, k;
  cin >> n >> k;

  // 答えを格納する変数
  int ans = 0;

  // 2重ループで答えを求める
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= k; j++) {
      ans += (100 * i + j);
    }
  }

  // 答えを出力
  cout << ans << endl;

  return 0;
}