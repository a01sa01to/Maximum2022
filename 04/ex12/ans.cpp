#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // ここにプログラムを追記
  int now = 1;
  for (int i = 0; i < S.size(); i++) {
    if (S[i] == '+') {
      now++;
    }
    else if (S[i] == '-') {
      now--;
    }
  }
  cout << now << endl;

  return 0;
}
