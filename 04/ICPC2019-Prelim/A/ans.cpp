#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    // 入力
    int n, m;
    cin >> n >> m;
    if (n + m == 0) {
      break;
    }
    vector<vector<int>> List(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        cin >> List[i][j];
      }
    }

    // それぞれの合計点を求める
    vector<int> sum(n, 0);
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        sum[j] += List[i][j];
      }
    }

    // 最大値を求める
    int maxim = 0;
    for (int i = 0; i < n; i++) {
      maxim = max(maxim, sum[i]);
    }

    // 出力
    cout << maxim << endl;
  }
  return 0;
}