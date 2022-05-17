#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int a, b;
  cin >> a >> b;

  // もしa+bが奇数（2で割ったあまりが1）なら、IMPOSSIBLE
  if ((a + b) % 2 == 1) {
    cout << "IMPOSSIBLE" << endl;
  }
  // 偶数なら、(a+b)/2を出力
  else {
    cout << (a + b) / 2 << endl;
  }
}