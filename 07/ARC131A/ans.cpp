#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  long long a, b;
  cin >> a >> b;

  // 数字の後に「LL」とつけることによって、long long型に変換される（オーバーフローの防止）
  cout << 500'000'000LL * b + a << endl;
  return 0;
}