#include <bits/stdc++.h>
using namespace std;

int f(int x) {
  // 大きい順に並び変えてできる整数を求める
  string s1 = to_string(x);
  sort(s1.begin(), s1.end(), greater<>());
  int g1 = stoi(s1);

  // 小さい順に並び変えてできる整数を求める
  string s2 = to_string(x);
  sort(s2.begin(), s2.end());
  int g2 = stoi(s2);

  // f(x) = g1 - g2
  return g1 - g2;
}

// Aiがxであるときのkの値
int solve(int i, int x, const int k) {
  // k番目のとき、x (= Ak) を返す
  if (i == k) {
    return x;
  }
  // そうでないとき、再帰的にAkを求める
  return solve(i + 1, f(x), k);
}

int main() {
  int n, k;
  cin >> n >> k;
  // A0はn
  cout << solve(0, n, k) << endl;
}