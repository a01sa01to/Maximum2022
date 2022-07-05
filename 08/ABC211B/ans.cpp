#include <bits/stdc++.h>
using namespace std;

int main() {
  // あらかじめsetを用意
  set<string> st;

  // s1 ～ s4 を入力し、それぞれをsetに挿入する
  for (int i = 0; i < 4; i++) {
    string s;
    cin >> s;
    st.insert(s);
  }

  // set.sizeが4ならYes、そうでなければNo
  cout << (st.size() == 4 ? "Yes" : "No") << endl;
  return 0;
}