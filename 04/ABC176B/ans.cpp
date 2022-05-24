#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  string n;
  cin >> n;

  // 各桁の和を保存しておく変数
  int sum = 0;

  // 桁の数を加える
  for (int i = 0; i < n.size(); i++) {
    sum += n[i] - '0';
  }

  // 各桁の和が9で割り切れるなら、Yes
  if (sum % 9 == 0) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }

  return 0;
}