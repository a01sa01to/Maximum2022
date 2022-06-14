#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // 総和を求める
  int sum = accumulate(a.begin(), a.end(), 0);
  // あるいは、こうしてもいいです
  // int sum = 0;
  // for (int i = 0; i < n; i++) {
  //   sum += a[i];
  // }

  // 平均値を求める
  int avg = sum / n;

  // 偏差を求め、出力
  for (int i = 0; i < n; i++) {
    cout << abs(a[i] - avg) << endl;
  }

  return 0;
}