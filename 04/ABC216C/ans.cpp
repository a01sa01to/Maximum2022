#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  long long n;
  cin >> n;

  // 答えを格納する変数
  string ans = "";

  // 処理
  while (n > 0) {
    // 操作A' : 奇数なら、1減らす
    if (n % 2 == 1) {
      ans += "A";
      n--;
    }
    // 操作B' : 偶数なら、2で割る
    else {
      ans += "B";
      n /= 2;
    }
  }

  // 答えが逆になっているので、逆から出力する
  for (int i = ans.size() - 1; i >= 0; i--) {
    cout << ans[i];
  }

  // あるいは...
  // reverse(ans.begin(), ans.end());  // 逆順にする
  // cout << ans << endl;              // 答えを出力する
  // としてもよいです

  return 0;
}