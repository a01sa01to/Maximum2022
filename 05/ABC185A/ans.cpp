#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  vector<int> data(4);
  for (int i = 0; i < 4; i++) {
    cin >> data[i];
  }

  // 最小値を求める（繰り返し処理を使う場合）
  int minimum = data[0];
  for (int i = 1; i < 4; i++) {
    if (data[i] < minimum) {
      minimum = data[i];
    }
  }
  cout << minimum << endl;

  // 最小値を求める（min関数を使う場合）
  cout << min({ data[0], data[1], data[2], data[3] }) << endl;

  // 最小値を求める（min_element関数を使う場合）
  cout << *min_element(data.begin(), data.end()) << endl;

  return 0;
}