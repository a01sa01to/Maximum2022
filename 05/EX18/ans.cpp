#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
  vector<vector<char>> table(N, vector<char>(N, '-'));

  // 各試合に対して処理
  for (int i = 0; i < M; i++) {
    // A[i]が勝ち、B[i]が負け
    // table[1人目][2人目] = 1人目が2人目に勝ったかどうか
    table[A[i] - 1][B[i] - 1] = 'o';
    table[B[i] - 1][A[i] - 1] = 'x';
  }

  // 出力
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << table[i][j];

      if (j == N - 1) {
        // 末尾なら改行
        cout << endl;
      }
      else {
        // それ以外なら空白
        cout << " ";
      }
    }
  }

  return 0;
}
