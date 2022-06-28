#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // 出力
  for (int i = 0; i < n; i++) {
    // もしa[i]=xではないときに出力
    // 逆に言えば、a[i]=xのときはスキップされる
    if (a[i] != x) {
      cout << a[i] << " ";
    }
  }
  cout << endl;

  return 0;
}