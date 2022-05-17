#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  string a, b;
  // ↑もしくは「char a, b;」
  cin >> a >> b;

  // 出力
  // どちらも同じならH、違うならD
  cout << (a == b ? "H" : "D") << endl;
  // 以下と同じ意味
  // if (a == b) {
  //   cout << "H" << endl;
  // }
  // else {
  //   cout << "D" << endl;
  // }
}