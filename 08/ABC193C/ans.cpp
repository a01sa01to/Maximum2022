#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  long long n;
  cin >> n;

  set<long long> s;

  // 調べ上げる
  for (long long a = 2; a * a <= n; a++) {
    // 2乗の値から調べる
    long long t = a * a;
    // 現在の値がnより小さいとき
    while (t <= n) {
      // その値を追加
      s.insert(t);
      // bを1増やす = a倍する
      t *= a;
    }
  }

  // 出力
  cout << n - s.size() << endl;
  return 0;
}