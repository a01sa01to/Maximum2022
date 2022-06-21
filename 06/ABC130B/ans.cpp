#include <bits/stdc++.h>
using namespace std;

int f(int i, const vector<int>& l) {
  // D1 = 0
  if (i == 0) {
    return 0;
  }
  // Di = D(i-1) + L(i-1)
  return f(i - 1, l) + l[i - 1];
}

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> l(n);
  for (int i = 0; i < n; i++) {
    cin >> l[i];
  }

  // 繰り返し処理で何回までできるか求める
  for (int i = 0; i <= n; i++) {
    // 次跳ねたら領域外に出る場合
    // 今回はギリギリ領域外に出ないので、これが答え
    // 答えを出力して、ループを抜ける
    if (f(i + 1, l) > x) {
      // 配列は0から始まるが、答えは1から始まるので+1する
      cout << i + 1 << endl;
      break;
    }
  }
  return 0;
}