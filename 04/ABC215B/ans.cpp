#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  long long n;
  cin >> n;

  // 2のk乗を保持しておく変数
  long long pow2 = 1;
  int k = 0;

  // kを1ずつ増やしていく→2のk乗が2倍になる
  while (2 * pow2 <= n) {
    k++;
    pow2 *= 2;
  }

  // 出力
  cout << k << endl;

  return 0;
}