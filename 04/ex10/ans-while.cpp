#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  // ここにプログラムを追記
  cout << "A:";
  int i = 0;
  while (i < A) {
    cout << "]";
    i++;
  }
  cout << endl;

  cout << "B:";
  // すでに宣言をしているので、代入だけ行う
  // int i = 0 とは書けない
  i = 0;
  while (i < B) {
    cout << "]";
    i++;
  }
  cout << endl;

  return 0;
}
