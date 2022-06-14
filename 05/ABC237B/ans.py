# 入力
h, w = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(h)]

# 転置行列を求める
b = [[0]*h for _ in range(w)]
for i in range(h):
    for j in range(w):
        b[j][i] = a[i][j]

# 出力
for i in range(w):
    for j in range(h):
        print(b[i][j], end=' ')
    print()
