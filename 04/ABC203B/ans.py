# 入力
n, k = map(int, input().split())

# 答えを格納する変数
ans = 0

# 2重ループで答えを求める
# range(x, y) としたとき、x から y-1 までになることに注意
for i in range(1, n + 1):
    for j in range(1, n + 1):
        ans += 100 * i + j

# 出力
print(ans)
