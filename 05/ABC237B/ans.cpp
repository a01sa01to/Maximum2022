#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int h, w;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> a[i][j];
    }
  }

  // 転置行列を求める
  vector<vector<int>> b(w, vector<int>(h));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      b[j][i] = a[i][j];
    }
  }

  // 出力
  for (int i = 0; i < w; i++) {
    for (int j = 0; j < h; j++) {
      cout << b[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}