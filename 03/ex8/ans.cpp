#include <bits/stdc++.h>
using namespace std;

int main() {
  int p;
  cin >> p;

  // ここを動かした
  int price;

  // パターン1
  if (p == 1) {
    cin >> price;
  }

  // パターン2
  if (p == 2) {
    string text;
    cin >> text >> price;

    // ここを動かした
    cout << text << "!" << endl;
  }

  int N;
  cin >> N;

  cout << price * N << endl;
}