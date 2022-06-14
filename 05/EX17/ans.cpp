#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S;
  cin >> N >> S;
  vector<int> A(N), P(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }

  // リンゴ・パイナップルをそれぞれ1つずつ購入するとき合計S円になるような買い方が何通りあるか
  // ここにプログラムを追記
  int ans = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      // i番目のリンゴを購入して、j番目のパイナップルを購入する
      // この時に合計S円になれば、ansに1を足す
      if (A[i] + P[j] == S) {
        ans++;
      }
    }
  }

  // ansを出力
  cout << ans << endl;

  return 0;
}
