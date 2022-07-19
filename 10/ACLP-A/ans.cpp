#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
  // 配列parを宣言する
  vector<int> par;

  // コンストラクタ
  // 引数nを受け取る
  UnionFind(int n) {
    // 配列parの要素数をnにする
    par.resize(n);
    // それぞれの値を、それぞれの添字にする
    for (int i = 0; i < n; i++) {
      par[i] = i;
    }
  }

  // root
  // xの属するグループのリーダーを求める
  int root(int x) {
    // もしpar[x]=xなら、それがリーダーとみなす
    if (par[x] == x) { return x; }
    // そうでなければ、再帰的にリーダーを求め、par[x]に代入する
    par[x] = root(par[x]);
    return par[x];
  }

  // unite
  // x,yを受け取り、xとyを同じグループにする
  void unite(int x, int y) {
    // それぞれのリーダーを求める
    int rx = root(x);
    int ry = root(y);
    // もしリーダーが違う = 同じグループに属していないとき、
    // rxのリーダーをryにする → 同じグループにまとめる
    if (rx != ry) {
      par[rx] = ry;
    }
  }

  // same
  // x,yを受け取り、xとyが同じグループに属するかをboolで返す
  bool same(int x, int y) {
    // それぞれのリーダーを求め、もしリーダーが同じであれば同じグループにある
    return root(x) == root(y);
  }
};

int main() {
  // 入力
  int n, q;
  cin >> n >> q;
  // UnionFindを初期化
  UnionFind uf(n);

  for (int _ = 0; _ < q; _++) {
    int t, u, v;
    cin >> t >> u >> v;
    // クエリ0: uとvをつなげる = 同じグループにする
    if (t == 0) {
      uf.unite(u, v);
    }
    // クエリ1: 同じグループかどうかを判定する
    else {
      bool ans = uf.same(u, v);
      cout << (ans ? 1 : 0) << endl;
    }
  }
}