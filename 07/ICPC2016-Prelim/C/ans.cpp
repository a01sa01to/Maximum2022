#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    // 入力
    int m, n;
    cin >> m >> n;
    if (m + n == 0) break;

    // 最大値
    const int INF = 7'500'000;
    // 花が咲かないかどうか
    vector<bool> boring(INF, true);
    //　エラトステネスの篩
    for (int i = m; i < INF; i++) {
      // もし咲かない場合、新しい区画に埋める
      if (boring[i] && n > 0) {
        // 咲くことにする
        boring[i] = false;
        // 区画を減らす
        n--;
        // その倍数を咲くことにする
        for (int j = 2; j * i < INF; j++) {
          boring[j * i] = false;
        }
      }
    }
    // 初めて咲かない年を探す
    for (int i = m; i < INF; i++) {
      if (boring[i]) {
        cout << i << endl;
        break;
      }
    }
  }
  return 0;
}