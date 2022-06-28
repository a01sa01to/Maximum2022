#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }

  // 仮の答えを大きい数字にしておく
  int ans = 1'000'000'000;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      // もしi==jなら、1人で2つの仕事をする
      // つまりかかる時間は a[i] + b[i]
      // ansと比較して、小さい方をansに代入する
      if (i == j) {
        ans = min(ans, a[i] + b[i]);
      }
      // そうではない場合、2人のかかる時間の最大値
      // ansと↑を比較し、小さいほうをansに代入する
      else {
        ans = min(ans, max(a[i], b[j]));
      }
    }
  }
  // 出力
  cout << ans << endl;

  return 0;
}