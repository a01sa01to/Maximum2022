class UnionFind:
    def __init__(self, n):
        self.par = [-1 for i in range(n)]

    # 2頂点を結合する
    def unite(self, x, y):
        a = self.root(x)
        b = self.root(y)
        if a != b:
            if -self.par[a] < -self.par[b]:
                t = a
                a = b
                b = t
            self.par[a] += self.par[b]
            self.par[b] = a
        return a

    # 2頂点は連結か
    def same(self, x, y):
        return self.root(x) == self.root(y)

    # 頂点xの木の根を返す
    def root(self, x):
        if self.par[x] < 0:
            return x
        else:
            self.par[x] = self.root(self.par[x])
            return self.par[x]

    # 頂点xが属する木のサイズを返す
    def size(self, x):
        return -self.par[self.root(x)]


while True:
    # 入力
    m, n, p = map(int, input().split())
    if m + n + p == 0:
        break

    # m頂点からなるUnionFind木を作る
    uf = UnionFind(m)

    for i in range(n):
        a, b = map(int, input().split())

        # もしも最初の感染者pとaが同じグループ→aも感染疑いがある
        # あるいはpとbが同じグループ→bも感染疑いがある
        if uf.same(p - 1,  a - 1) or uf.same(p - 1,   b - 1):
            # aとbを結合する
            # →pとaとbは同じグループになる
            # →aとbは2人とも感染疑いがある
            uf.unite(a - 1, b - 1)

    # pと同じグループの人数 = 感染疑いのある人数 を出力
    print(uf.size(p - 1))
