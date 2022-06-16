#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    // 最初の行の入力
    int n, m, t, p;
    cin >> n >> m >> t >> p;
    if (n + m + t + p == 0) break;

    // Grid[y][x] = (x,y)に何枚重なっているか
    vector Grid(m, vector<int>(n, 1));
    while (t--) {
      int d, c;
      cin >> d >> c;
      if (d == 1) {
        for (int i = 0; i < Grid.size(); i++) {
          for (int j = 0; j < c; j++) {
            // もし折りたたんだ時に越える場合、末尾に追加する
            if (c + j >= Grid[i].size()) {
              Grid[i].push_back(Grid[i][c - j - 1]);
            }
            // 超えない場合、折りたたんだ位置に追加する
            else {
              Grid[i][c + j] += Grid[i][c - j - 1];
            }
            // 折りたたんだので、その座標には紙がなくなる
            Grid[i][c - j - 1] = 0;
          }
        }
      }
      if (d == 2) {
        for (int i = 0; i < c; i++) {
          for (int j = 0; j < Grid[0].size(); j++) {
            // もし折りたたんだ時に越える場合、末尾に追加する
            if (c + i >= Grid.size()) {
              Grid.push_back(vector<int>(Grid[0].size(), 0));
            }
            // 折りたたんだ後の位置に追加する
            Grid[c + i][j] += Grid[c - i - 1][j];
            // 折りたたんだので、その座標には紙がなくなる
            Grid[c - i - 1][j] = 0;
          }
        }
      }

      // 「平行移動」処理
      for (int i = Grid.size() - 1; i >= 0; i--) {
        // 0となった場所を削除（x座標において）
        auto itr = remove_if(Grid[i].begin(), Grid[i].end(), [](int x) {
          return x == 0;
        });
        Grid[i].erase(itr, Grid[i].end());

        // 0となった場所を削除（y座標において）
        if (accumulate(Grid[i].begin(), Grid[i].end(), 0) == 0) Grid.erase(Grid.begin() + i);
      }

      // 実際にどうなっているか確かめたいときは、コメントアウトを外してください
      // for (int i = Grid.size() - 1; i >= 0; i--) {
      //   for (int j = 0; j < Grid[0].size(); j++) {
      //     cout << Grid[i][j] << " ";
      //   }
      //   cout << endl;
      // }
      // cout << "-----" << endl;
    }
    while (p--) {
      int x, y;
      cin >> x >> y;
      // (x,y)にある紙の枚数 = 穴の個数 = Grid[y][x]
      // Grid[i][j] = (j,i)にある枚数であることに注意
      cout << Grid[y][x] << endl;
    }
  }
  return 0;
}