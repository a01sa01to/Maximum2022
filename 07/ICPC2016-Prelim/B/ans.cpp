#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    // 入力
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }

    // 票数を格納しておく
    vector<int> cnt(26, 0);
    // すでに出力したか
    bool output = false;
    for (int i = 0; i < n; i++) {
      char c;
      cin >> c;
      // もし出力していれば、その後の処理は行わない
      // しかし、入力は受け取っておく必要がある
      if (output) continue;

      // 票数を1増やす
      cnt[c - 'A']++;

      // 1・2番目に票数が多い人を探す
      // first:票数、second:何番目か
      pair<int, int> maxim1 = { 0, -1 }, maxim2 = { 0, -1 };
      for (int j = 0; j < 26; j++) {
        // 1番目に大きい場合、暫定1位を暫定2位にずらしてから、上書き
        if (cnt[j] > maxim1.first) {
          maxim2 = maxim1;
          maxim1 = { cnt[j], j };
        }
        // 2番目に大きい場合、暫定2位を上書き
        else if (cnt[j] > maxim2.first) {
          maxim2 = { cnt[j], j };
        }
      }
      // 残り票数
      int rem = n - i - 1;
      // もし暫定1位の票数が、暫定2位の票数+残り票数なら勝てないので確定
      if (maxim1.first > maxim2.first + rem) {
        cout << char('A' + maxim1.second) << " " << i + 1 << endl;
        output = true;
      }
      // 残り票数がない かつ「1位の票数 > 2位の票数」ではない
      // つまり、引き分け
      else if (rem == 0) {
        cout << "TIE" << endl;
        output = true;
      }
    }
  }
  return 0;
}