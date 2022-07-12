#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int n, s, d;
  cin >> n >> s >> d;
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
  }
  // チェック
  bool exists = false;
  for (int i = 0; i < n; i++) {
    auto [x, y] = v[i];
    if (x < s && y > d) {
      exists = true;
      break;
    }
  }
  // 出力
  if (exists) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}