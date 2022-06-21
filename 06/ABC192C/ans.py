import sys
# 再帰の回数を変更する（デフォルトでは K<1000しか対応できないらしい）
sys.setrecursionlimit(10**6)


def f(x: int) -> int:
    # 大きい順に並び変えてできる整数を求める
    s1 = str(x)
    sorted_s1 = "".join(sorted(s1, reverse=True))
    g1 = int(sorted_s1)

    # 同様に小さい順に並び変えてできる整数を求める
    s2 = str(x)
    sorted_s2 = "".join(sorted(s2))
    g2 = int(sorted_s2)

    # f(x) = g1 - g2
    return g1 - g2


def solve(i: int, x: int, k: int) -> int:
    # Aiがxであるときのkの値
    # k番目のとき、x (= Ak) を返す
    if i == k:
        return x
    # そうでないとき、再帰的にAkを求める
    return solve(i + 1, f(x), k)


n, k = map(int, input().split())
# A0はn
print(solve(0, n, k))
