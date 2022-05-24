#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int n;
  cin >> n;

  // 各色があるかどうかを格納する変数
  bool pink = false, white = false, green = false, yellow = false;

  // 各色をチェックする
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    if (s == "P") {
      pink = true;
    }
    else if (s == "W") {
      white = true;
    }
    else if (s == "G") {
      green = true;
    }
    else if (s == "Y") {
      yellow = true;
    }
  }

  // 4色あるならFour
  if (pink && white && green && yellow) {
    cout << "Four" << endl;
  }
  // 3色あるならThree
  else if (pink && white && green) {
    cout << "Three" << endl;
  }
}