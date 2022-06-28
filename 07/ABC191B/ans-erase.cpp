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

  // a[i] == x となる要素を削除
  auto itr = remove_if(a.begin(), a.end(), [&](int ai) {
    return ai == x;
  });
  a.erase(itr, a.end());

  // 出力
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}