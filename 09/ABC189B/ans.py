# 入力
n, x = map(int, input().split())
vec = list(tuple(map(int, input().split())) for _ in range(n))

# 累積アルコール摂取量
total = 0
for i in range(n):
    v, p = vec[i]
    total += v * p
    # 酔っぱらった
    if total > 100 * x:
        # 0からスタートなので、1を足すことに注意
        print(i + 1)
        # 終了
        exit()

# ここまで来た = 酔っぱらってない
# -1 を出力して終了
print(-1)
