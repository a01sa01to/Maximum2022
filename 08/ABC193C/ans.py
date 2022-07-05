# 入力
from math import floor, sqrt


n = int(input())

s = set()

# 調べ上げる
for a in range(2, floor(sqrt(n)) + 1):
    # 2乗の値から調べる
    t = a ** 2
    # 現在の値がnより小さいとき
    while t <= n:
        # その値を追加
        s.add(t)
        # bを1増やす = a倍する
        t *= a

# 出力
print(n - len(s))
