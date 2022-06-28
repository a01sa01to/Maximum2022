#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int n;
  cin >> n;
  vector<long long> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // Ai^2 の総和
  long long sum_a2 = 0;
  for (int i = 0; i < n; i++) {
    sum_a2 += a[i] * a[i];
  }
  // Ai の総和
  long long sum_a = 0;
  for (int i = 0; i < n; i++) {
    sum_a += a[i];
  }

  // 答えを出力
  cout << n * sum_a2 - sum_a * sum_a << endl;

  return 0;
}