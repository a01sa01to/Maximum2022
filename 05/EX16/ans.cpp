#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  // ここにプログラムを追記
  bool checked = false;
  // 5個の要素があるが、i+1にアクセスしたいので「i < 4」とする
  for (int i = 0; i < 4; i++) {
    if (data[i] == data[i + 1]) {
      cout << "YES" << endl;
      checked = true;
      break;
    }
  }

  // もしまだ出力されていなければ「NO」
  if (!checked) {
    cout << "NO" << endl;
  }

  return 0;
}
