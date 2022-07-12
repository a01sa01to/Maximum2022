#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int n;
  cin >> n;
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++) {
    // 逆にして入力する
    cin >> v[i].second >> v[i].first;
  }
  // 逆にして入力したことで、普通にソートしてよい
  sort(v.begin(), v.end());
  // 出力
  for (int i = 0; i < n; i++) {
    // 元の順番に戻すことを忘れずに
    cout << v[i].second << " " << v[i].first << endl;
  }
  return 0;
}