#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  // まだ確定していないときの値（10^9とした）
  constexpr int Undefined = 1e9;

  while (true) {
    // 入力
    int w, h;
    cin >> w >> h;

    // もしwとhが両方0であれば、終了
    if (w + h == 0) break;

    // 決められたマスを受け取る
    vector Grid(w, vector<int>(h, Undefined));
    rep(_, w + h - 1) {
      int x, y, n;
      cin >> x >> y >> n;
      Grid[x - 1][y - 1] = n;
    }

    // 上端・左端のマスの配列
    vector<int> Top(w, Undefined), Left(h, Undefined);
    // 上端の一番左を0にする
    Top[0] = 0;

    while (true) {
      // 更新されたかを管理する
      bool updated = false;

      rep(i, w) rep(j, h) {
        // 上・左が決まっていて、マスが未確定なら決める
        if (Top[i] != Undefined && Left[j] != Undefined && Grid[i][j] == Undefined) {
          Grid[i][j] = Top[i] + Left[j];
          updated = true;
        }

        // 左とマスが決まっているが、上が決まっていない
        if (Left[j] != Undefined && Grid[i][j] != Undefined && Top[i] == Undefined) {
          Top[i] = Grid[i][j] - Left[j];
          updated = true;
        }

        // 上とマスが決まっているが、左が決まっていない
        if (Top[i] != Undefined && Grid[i][j] != Undefined && Left[j] == Undefined) {
          Left[j] = Grid[i][j] - Top[i];
          updated = true;
        }
      }

      // 更新されなくなったら、終了
      if (!updated) break;
    }

    // 未確定の場所があるか調べる
    bool existsUndefined = false;
    rep(i, w) if (Top[i] == Undefined) existsUndefined = true;
    rep(i, h) if (Left[i] == Undefined) existsUndefined = true;
    rep(i, w) rep(j, h) {
      if (Grid[i][j] == Undefined) existsUndefined = true;
    }

    // 未確定の場所があればNo、そうでなければYes。
    cout << (existsUndefined ? "NO" : "YES") << endl;
  }
  return 0;
}