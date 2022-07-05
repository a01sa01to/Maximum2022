#include <bits/stdc++.h>
using namespace std;

int main() {
  // xの入力
  string x;
  cin >> x;

  // 新たな順番と普通の順番の対応付け
  // mp[x] = xの普通の順番に対応するアルファベット
  // mpinv[x] = xの新しい順番
  // mpinv[mp[x]] = x と戻ってくることになる
  map<char, char> mp, mpinv;
  for (int i = 0; i < 26; i++) {
    mp[x[i]] = char(i + 'a');
    mpinv[char(i + 'a')] = x[i];
  }

  // 入力
  int n;
  cin >> n;
  vector<string> v;
  for (int i = 0; i < n; i++) {
    // 入力
    string s;
    cin >> s;
    // いったん普通のアルファベット順に対応させる
    for (int j = 0; j < s.size(); j++) {
      s[j] = mp[s[j]];
    }
    v.push_back(s);
  }
  // 普通のアルファベット順になっているので、ソート可能
  sort(v.begin(), v.end());

  // 小さい順に出力
  for (int i = 0; i < n; i++) {
    // 元の文字列に戻してあげる必要がある
    for (int j = 0; j < v[i].size(); j++) {
      v[i][j] = mpinv[v[i][j]];
    }
    cout << v[i] << endl;
  }
  return 0;
}