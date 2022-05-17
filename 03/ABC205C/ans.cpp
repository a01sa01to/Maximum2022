#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  long long a, b, c;
  cin >> a >> b >> c;

  // A=Bなら、明らかに等しい
  if (a == b) {
    cout << "=" << endl;
  }
  // AのC乗・BのC乗が、異符号かどうかを判定する
  // 異符号となるのは、Cが奇数で、A*Bが負の数であるとき
  // A*Bは最大で10の18乗になるので、intではなくlong longを使う必要があります
  else if ((c % 2 == 1) && (a * b < 0)) {
    // この場合、A,Bのうち、負のほうが小さい
    cout << (a < 0 ? "<" : ">") << endl;
  }
  // AのC乗・BのC乗が、同符号のとき
  else {
    // 絶対値で比較する
    // abs関数という、絶対値を求める関数を用います
    a = abs(a);
    b = abs(b);

    // 絶対値の小さいほうが、小さい
    // 同じなら、同じ
    if (a == b) {
      cout << "=" << endl;
    }
    else {
      cout << (a < b ? "<" : ">") << endl;
    }
  }
}