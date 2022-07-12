#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int n, x;
  cin >> n >> x;
  vector<pair<int, int>> vec(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i].first >> vec[i].second;
  }

  // 累積アルコール摂取量
  int sum = 0;
  for (int i = 0; i < n; i++) {
    auto [v, p] = vec[i];
    sum += v * p;
    // 酔っぱらった
    if (sum > 100 * x) {
      // 0からスタートなので、1を足すことに注意
      cout << i + 1 << endl;
      // 終了
      return 0;
    }
  }

  // ここまで来た = 酔っぱらってない
  // -1 を出力して終了
  cout << -1 << endl;
  return 0;
}