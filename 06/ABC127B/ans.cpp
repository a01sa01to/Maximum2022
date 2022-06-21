#include <bits/stdc++.h>
using namespace std;

int f(int year, int r, int d, int x2000) {
  // r,d,x2000を書き換えるとおかしくなるので、書き変わらないように「const」をつけてもよい
  // int f(int year, const int r, const int d, const int x2000) {

  // もし2000年なら、x2000を返す
  if (year == 2000) {
    return x2000;
  }
  // そうでなければ、r * f(year-1) - d を返す
  return r * f(year - 1, r, d, x2000) - d;
}

int main() {
  int r, d, x2000;
  cin >> r >> d >> x2000;

  // それぞれの年に対して計算をする
  // f(year, r, d, x2000)は、year年における答えを返す
  for (int i = 2001; i <= 2010; i++) {
    cout << f(i, r, d, x2000) << endl;
  }
  return 0;
}