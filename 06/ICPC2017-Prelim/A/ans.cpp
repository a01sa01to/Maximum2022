#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    // 入力
    int n, m;
    cin >> n >> m;
    if (n + m == 0) {
      break;
    }
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    // 仮に答えを-1としておく
    int ans = -1;
    // 2重ループで答えを求める
    for (int i = 0; i < n; i++) {
      // i ≠ j になる必要があるので j=i+1 で初期化
      for (int j = i + 1; j < n; j++) {
        // i番目とj番目を買うことにする
        int price = a[i] + a[j];
        // 決まった金額を超えない場合
        if (price <= m) {
          // priceのほうが大きければそれに書き換え
          ans = max(ans, price);
        }
      }
    }

    // ansが-1のとき、どの値も書き変わってない = 予算オーバー
    if (ans == -1) {
      cout << "NONE" << endl;
    }
    // そうでなければ、最大値を出力
    else {
      cout << ans << endl;
    }
  }
  return 0;
}