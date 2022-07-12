#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int n;
  cin >> n;

  // オリジナルかどうかをチェックするset
  set<string> st;
  // 得点とそのindexを格納する
  vector<pair<int, int>> v;
  for (int i = 0; i < n; i++) {
    // 入力
    string s;
    cin >> s;
    int x;
    cin >> x;

    if (!st.count(s)) {
      // オリジナルなので、得点とindexを追加する
      v.push_back(make_pair(x, i + 1));
      st.insert(s);
    }
  }
  // 求める
  pair<int, int> maxim = { 0, 0 };
  for (int i = 0; i < v.size(); i++) {
    // 得点が高い場合、その得点とindexを更新する
    if (v[i].first > maxim.first) {
      maxim = v[i];
    }
    // 得点が同じ場合、indexが小さいほうを更新する
    // しかし、この実装では、indexが小さい順にみているのでその必要はない
  }
  // 出力
  cout << maxim.second << endl;
  return 0;
}