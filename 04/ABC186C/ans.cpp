#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int n;
  cin >> n;

  // 答えを格納する変数
  int ans = 0;

  // 1からnまでの数全部を調べる
  for (int x = 1; x <= n; x++) {
    // 10進数のときを調べる
    bool check10 = false;

    // 一時的な変数
    // xを直接書き換えてはいけないため（数が戻ってしまうため）
    int t = x;

    while (t > 0) {
      // 桁が7のとき
      if (t % 10 == 7) {
        check10 = true;
        break;
      }
      // 10で割り、切り捨てる
      t /= 10;
    }

    // 8進数のときを調べる
    bool check8 = false;
    // 一時的な変数tをxに戻す
    t = x;
    while (t > 0) {
      // 桁が7のとき
      if (t % 8 == 7) {
        check8 = true;
        break;
      }
      // 8で割り、切り捨てる
      t /= 8;
    }

    // もしどちらにも7が含まれないとき、答えに加算する
    if (!check10 && !check8) {
      ans++;
    }
  }

  // 答えを出力する
  cout << ans << endl;
}