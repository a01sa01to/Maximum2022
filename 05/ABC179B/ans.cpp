#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int n;
  cin >> n;
  vector<vector<int>> d(n, vector<int>(2));
  for (int i = 0; i < n; i++) {
    cin >> d[i][0] >> d[i][1];
  }

  // 答えを求める
  bool ans = false;
  // i+2にアクセスするので、i+2<nになるようにする
  for (int i = 0; i < n - 2; i++) {
    if (d[i][0] == d[i][1] && d[i + 1][0] == d[i + 1][1] && d[i + 2][0] == d[i + 2][1]) {
      ans = true;
      break;
    }
  }

  // 出力
  cout << (ans ? "Yes" : "No") << endl;

  return 0;
}