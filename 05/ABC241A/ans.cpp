#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  vector<int> a(10);
  for (int i = 0; i < 10; i++) {
    cin >> a[i];
  }

  // 出力
  cout << a[a[a[0]]] << endl;

  return 0;
}