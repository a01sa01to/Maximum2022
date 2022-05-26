#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    // 入力
    int h, w;
    cin >> h >> w;
    if (h + w == 0) {
      break;
    }
    vector<string> r(h);
    for (int i = 0; i < h; i++) {
      cin >> r[i];
    }
    string s;
    cin >> s;

    // 各文字がどこにあるかを記録
    map<char, pair<int, int>> m;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if (r[i][j] != '_') {
          m[r[i][j]] = { i, j };
        }
      }
    }

    // 最初は (0,0) からスタート
    int x = 0, y = 0;

    // 答えを格納する変数
    int ans = 0;

    // 各文字に対して、最短経路を求めて移動を繰り返す
    for (int i = 0; i < s.size(); i++) {
      // 入力する文字
      char c = s[i];

      // 移動先の位置
      int nx = m[c].first, ny = m[c].second;

      // 移動先の位置から現在の位置までの距離は、マンハッタン距離
      int d = abs(nx - x) + abs(ny - y);

      // 移動先の位置に移動
      x = nx;
      y = ny;

      // 移動先の位置から現在の位置までの距離を足す
      ans += d;

      // OKを押す分
      ans++;
    }

    cout << ans << endl;
  }
  return 0;
}