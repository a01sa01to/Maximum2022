#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    // 入力
    int m, n, p;
    cin >> m >> n >> p;
    if (m + n + p == 0) break;

    // 感染者のセットを作り、最初の感染者 p をセットに入れる
    set<int> infected;
    infected.insert(p);

    for (int i = 0; i < n; i++) {
      int a, b;
      cin >> a >> b;

      // aが感染者セットに入っていた場合
      if (infected.count(a)) {
        // bも感染者セットに入れる
        infected.insert(b);
      }
      // bが感染者セットに入っていた場合
      if (infected.count(b)) {
        // aも感染者セットに入れる
        infected.insert(a);
      }
    }

    // 感染者セットの人数を出力
    cout << infected.size() << endl;
  }
}