#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

void dfs(const int v, const vector<vector<int>>& Graph, vector<bool>& visited) {
  // その点と隣接している頂点それぞれについて
  for (int next_v : Graph[v]) {
    // すでに訪問済みならスキップする
    if (visited[next_v]) continue;
    // 訪問済みにする
    visited[next_v] = true;
    // 再帰的に訪問する
    dfs(next_v, Graph, visited);
  }
}

int main() {
  while (true) {
    // 入力
    int w, h;
    cin >> w >> h;

    // もしwとhが両方0であれば、終了
    if (w + h == 0) break;

    // 決められたマスからグラフを生成
    // グラフは[上1, 上2, ..., 上w, 左1, 左2, ..., 左h]とする
    vector Graph(w + h, vector<int>(0));
    rep(_, w + h - 1) {
      int x, y, n;
      cin >> x >> y >> n;
      --x, --y;
      Graph[x].push_back(y + w);
      Graph[y + w].push_back(x);
    }

    // 訪問済みか管理する配列
    // 上端の一番左からスタートする
    vector<bool> visited(w + h, false);
    visited[0] = true;
    dfs(0, Graph, visited);

    // 未確定の場所があるか調べる
    // この場合、訪問済みのマスの個数 = w+h かどうかをチェックしている
    bool existsNonvisited = (w + h != accumulate(visited.begin(), visited.end(), 0));
    // 未訪問の場所があればNo、そうでなければYes。
    cout << (existsNonvisited ? "NO" : "YES") << endl;
  }
  return 0;
}