# 入力
n, s, d = map(int, input().split())
v = list(tuple(map(int, input().split())) for _ in range(n))

# チェック
exist = False
for x, y in v:
    if x < s and y > d:
        exist = True
        break

# 出力
print("Yes" if exist else "No")
