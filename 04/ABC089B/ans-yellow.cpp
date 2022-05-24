#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int n;
  cin >> n;

  // 黄色があるかどうかを格納する変数
  bool yellow = false;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    if (s == "Y") {
      yellow = true;
    }
    // ほかの色は、必ず存在することが保証されているので、無視してよい
  }

  // 黄色があるなら、Four
  // そうでないなら、Three
  cout << (yellow ? "Four" : "Three") << endl;
}