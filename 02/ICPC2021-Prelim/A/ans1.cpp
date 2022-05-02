#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  while (true) {
    // 入力を受け取る
    vector<int> a(4);

    rep(i, 4) cin >> a[i];
    // repは「マクロ」と呼ばれるもので、この場合以下のように書いているのと同じです
    // for (int i = 0; i < 4; ++i) cin >> a[i];

    // もしすべての要素が0であれば終了
    if (a[0] + a[1] + a[2] + a[3] == 0) break;

    // ビー玉の入ったお椀が1以下ではない限り、続ける
    while (a.size() > 1) {
      // 小さい順にソートさせる
      sort(a.begin(), a.end());

      // 一番少ない数を、それぞれ引く（一番小さいものはa[0]）
      for (int i = 1; i < a.size(); ++i) a[i] -= a[0];

      // お椀の数が0以下のものを削除する
      auto itr = remove_if(a.begin(), a.end(), [](int x) {
        return x <= 0;
      });
      a.erase(itr, a.end());
    }

    // 最終的に残ったものが答え
    cout << a[0] << endl;
  }
  return 0;
}