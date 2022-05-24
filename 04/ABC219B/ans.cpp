#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  string s1, s2, s3, t;
  cin >> s1 >> s2 >> s3 >> t;

  // 繰り返し
  for (int i = 0; i < t.size(); i++) {
    // もし1なら、s1を出力
    if (t[i] == '1') {
      cout << s1;
    }
    // もし2なら、s2を出力
    else if (t[i] == '2') {
      cout << s2;
    }
    // もし3なら、s3を出力
    else if (t[i] == '3') {
      cout << s3;
    }
  }
  // 最後に改行
  cout << endl;
  return 0;
}