#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
  vector<int> par;
  UnionFind(int n): par(n, -1) {}

  // 2頂点を結合する
  int unite(int x, int y) {
    int a = root(x), b = root(y);
    if (a == b) return a;
    if (-par[a] < -par[b]) swap(a, b);
    par[a] += par[b];
    par[b] = a;
    return a;
  }

  // 2頂点は連結か
  bool same(int x, int y) {
    return root(x) == root(y);
  }

  // 頂点xの木の根を返す
  int root(int x) {
    if (par[x] < 0) return x;
    return par[x] = root(par[x]);
  }

  // 頂点xが属する木のサイズを返す
  int size(int x) {
    return -par[root(x)];
  }
};

int main() {
  while (true) {
    // 入力
    int m, n, p;
    cin >> m >> n >> p;
    if (m + n + p == 0) break;

    // m頂点からなるUnionFind木を作る
    UnionFind uf(m);

    for (int i = 0; i < n; i++) {
      int a, b;
      cin >> a >> b;

      // もしも最初の感染者pとaが同じグループ→aも感染疑いがある
      // あるいはpとbが同じグループ→bも感染疑いがある
      if (uf.same(p - 1, a - 1) || uf.same(p - 1, b - 1)) {
        // aとbを結合する
        // →pとaとbは同じグループになる
        // →aとbは2人とも感染疑いがある
        uf.unite(a - 1, b - 1);
      }
    }

    // pと同じグループの人数 = 感染疑いのある人数 を出力
    cout << uf.size(p - 1) << endl;
  }
  return 0;
}