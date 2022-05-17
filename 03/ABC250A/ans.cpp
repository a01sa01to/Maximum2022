#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int h, w, r, c;
  cin >> h >> w >> r >> c;

  // まず答えを4にする
  int ans = 4;

  // 上がない
  if (r == 1) ans--;
  // 下がない
  if (r == h) ans--;
  // 左がない
  if (c == 1) ans--;
  // 右がない
  if (c == w) ans--;

  // 出力
  cout << ans << endl;
}