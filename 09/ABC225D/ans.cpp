#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int n, q;
  cin >> n >> q;
  // 電車の初期化
  // 全要素を(-1,-1)にする
  // v[i].first = v[i]の前につながっている電車番号
  // v[i].second = v[i]の後につながっている電車番号
  vector<pair<int, int>> v(n, { -1, -1 });

  // q回繰り返す
  while (q--) {
    // 入力
    int t;
    cin >> t;
    if (t == 1) {
      int x, y;
      cin >> x >> y;
      // 0基準にする
      --x, --y;

      // 電車を連結する
      // 電車xの後ろに電車yをつなぐ
      v[x].second = y;
      // 電車yの前に電車xをつなぐ
      v[y].first = x;
    }
    else if (t == 2) {
      int x, y;
      cin >> x >> y;
      // 0基準にする
      --x, --y;

      // 電車を分離する
      // 電車xの後ろは何もないものとする
      v[x].second = -1;
      // 電車yの前は何もないものとする
      v[y].first = -1;
    }
    else {
      int x;
      cin >> x;
      // 0基準にする
      --x;

      // 電車xの先頭まで行く
      int now = x;
      // 現在見ている電車につながっている電車があれば
      while (v[now].first != -1) {
        // その前の電車にする
        now = v[now].first;
      }

      // 答えを格納する配列
      vector<int> ans;
      // 先頭から一番後ろまで行く
      while (now != -1) {
        // その電車を追加する
        // 1基準にして追加
        ans.push_back(now + 1);
        // その後の電車にする
        now = v[now].second;
      }

      // 出力
      // まず要素数を出力
      cout << ans.size();
      for (int i = 0; i < ans.size(); i++) {
        // 各要素を出力
        cout << " " << ans[i];
      }
      // 最後に改行
      cout << endl;
    }
  }
  return 0;
}