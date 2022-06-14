#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  long long ans = 0;
  for (int i = 0; i < n; i++) {
    // a[i-1] にアクセスするので、配列外参照を防ぐ
    if (i == 0) {
      continue;
    }
    if (a[i - 1] > a[i]) {
      // 前の人のほうが身長高いとき、踏み台を使って、同じ高さにする
      ans += a[i - 1] - a[i];
      a[i] = a[i - 1];
    }
  }

  // 出力
  cout << ans << endl;
}