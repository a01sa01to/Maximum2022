#include <bits/stdc++.h>
using namespace std;

void print(int i) {
  // i=1なら1と空白を出力
  if (i == 1) {
    cout << 1 << " ";
  }
  // それ以外なら、i-1までの結果を出力して、iと空白を出力して、またi-1までの結果を出力する
  else {
    print(i - 1);
    cout << i << " ";
    print(i - 1);
  }
}

int main() {
  int n;
  cin >> n;
  // 答えを出力させる
  print(n);
  return 0;
}