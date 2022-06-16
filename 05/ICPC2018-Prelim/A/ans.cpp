#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    // 入力
    int n;
    cin >> n;
    if (n == 0) break;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // 平均値を求める
    // accumulate関数の返り値は、初期値が0.0になっているのでdouble型
    double ave = accumulate(a.begin(), a.end(), 0.0) / n;

    // 答えを求める
    int ans = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] <= ave) ans++;
    }

    // 出力
    cout << ans << endl;
  }
  return 0;
}