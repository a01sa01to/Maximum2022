#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    // 入力
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    // 最小値を求める
    // 仮の答えは、大きいものにしておく
    int ans = 1'000'000'000;
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        // 差を求め、答えを更新する
        ans = min(ans, abs(a[i] - a[j]));
      }
    }

    // 出力
    cout << ans << endl;
  }
}