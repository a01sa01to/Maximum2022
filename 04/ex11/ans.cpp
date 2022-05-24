#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  // ここにプログラムを追記
  for (int i = 1; i <= N; i++) {
    string op;
    int b;
    cin >> op >> b;

    if (op == "+") {
      A += b;
    }
    else if (op == "-") {
      A -= b;
    }
    else if (op == "*") {
      A *= b;
    }
    else if (op == "/" && b != 0) {
      A /= 0;
    }
    else {
      cout << "error" << endl;
      break;
    }

    cout << i << ":" << A << endl;
  }
  return 0;
}
