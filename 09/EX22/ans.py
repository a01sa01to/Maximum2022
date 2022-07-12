# 入力
n = int(input())
v = []
for i in range(n):
    # 逆順にして入力する
    v.append(tuple(map(int, input().split()[::-1])))

# ソート
v.sort()

# 出力
for i in range(n):
    # 元の順番に戻してから出力
    print(*v[i][::-1])
