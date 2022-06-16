#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    // 入力
    int b;
    cin >> b;
    if (b == 0) break;

    // nを決め打ちして探す
    for (int n = sqrt(2 * b); n > 0; n--) {
      // もし整数ではなくなってしまう場合
      if (2 * b % n != 0) continue;
      if ((2 * b / n - n + 1) % 2 != 0) continue;

      // aを求める（上でチェックしているので、この値は整数であることが保証されている）
      int a = (2 * b / n - n + 1) / 2;

      // 問題文の制約よりa>=1なので、こうなるかをチェックする
      // nを最大化する問題で、nを大きいほうからチェックしているので、ここで出力しても問題ない
      if (a >= 1) {
        cout << a << " " << n << endl;
        break;
      }
    }
  }
  return 0;
}
