# Python (3.8.2) で提出するとTLEしました
# PyPy3 (7.3.0) で提出してください

# 入力
n = int(input())

# 答えを求める
ans = 0
for a in range(1, n + 1):
    for b in range(1, n // a + 1):
        c = n - a * b
        if c > 0:
            ans += 1

# 出力
print(ans)
