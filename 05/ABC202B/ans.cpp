#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  string s;
  cin >> s;

  // 反転させる
  reverse(s.begin(), s.end());

  // 各文字に対する処理
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '6') {
      s[i] = '9';
    }
    else if (s[i] == '9') {
      s[i] = '6';
    }
  }

  // 出力
  cout << s << endl;

  return 0;
}