#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    // 入力
    int n;
    cin >> n;
    if (n == 0) break;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    // 答えを格納する変数
    int ans = 0;

    // i+3を参照するので、i+3 < n でなければならない
    // すなわち、i < n-3 までループする
    for (int i = 0; i < n - 3; i++) {
      // 「2 0 2 0」 の並びであれば、カウントアップする
      if (a[i] == 2 && a[i + 1] == 0 && a[i + 2] == 2 && a[i + 3] == 0) {
        ans++;
      }
    }

    // 出力
    cout << ans << endl;
  }
}