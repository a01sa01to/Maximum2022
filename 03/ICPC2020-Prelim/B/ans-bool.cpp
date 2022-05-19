#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    // 入力
    int m, n, p;
    cin >> m >> n >> p;
    if (m + n + p == 0) break;

    // m人のbool配列を生成する（初期値はfalse）
    vector<bool> infected(m, false);
    // p番目の人を感染状態(=true)にする
    infected[p - 1] = true;

    for (int i = 0; i < n; i++) {
      int a, b;
      cin >> a >> b;

      // aが感染していた場合
      if (infected[a - 1]) {
        // bも感染させる
        infected[b - 1] = true;
      }
      // bが感染していた場合
      if (infected[b - 1]) {
        // aも感染させる
        infected[a - 1] = true;
      }
    }

    // 感染者の人数を数える
    int ans = 0;
    for (int i = 0; i < m; i++) {
      if (infected[i]) {
        ans++;
      }
    }

    // 出力
    cout << ans << endl;
  }
}