#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  while (true) {
    // 入力
    int d, w;
    cin >> d >> w;
    if (d + w == 0) break;
    vector<vector<int>> Grid(d, vector<int>(w));
    rep(i, d) rep(j, w) cin >> Grid[i][j];

    // 仮に答えを0にしておく
    int ans = 0;
    // 囲う長方形の左上の点と右下の点を全探索する
    rep(ax, d) rep(ay, w) {
      rep(bx, d) rep(by, w) {
        if (ax >= bx || ay >= by) continue;

        // 一番低い「壁」の高さを求める
        int wall_min = 100;
        // 縦に並んでいる壁
        for (int i = ax; i <= bx; i++) {
          wall_min = min(wall_min, Grid[i][ay]);
          wall_min = min(wall_min, Grid[i][by]);
        }
        // 横に並んでいる壁
        for (int j = ay; j <= by; j++) {
          wall_min = min(wall_min, Grid[ax][j]);
          wall_min = min(wall_min, Grid[bx][j]);
        }

        // 壁からあふれるか
        bool over = false;
        // この場合の池の容量
        int t = 0;
        // 内部のセルを調べる
        for (int i = ax + 1; i < bx; i++) {
          for (int j = ay + 1; j < by; j++) {
            // 一番低い壁より標高が高い
            if (Grid[i][j] >= wall_min) over = true;
            // 差を加える
            // wall_min > Grid[i][j] でない場合は候補として使われない
            t += wall_min - Grid[i][j];
          }
        }
        // もし条件を満たしていれば、答えをこれまでの最大値と比較して更新
        if (!over) ans = max(ans, t);
      }
    }
    cout << ans << endl;
  }
  return 0;
}