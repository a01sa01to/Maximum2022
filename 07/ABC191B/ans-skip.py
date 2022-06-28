# 入力
n, x = map(int, input().split())
a = list(map(int, input().split()))

# 出力
for i in range(n):
    # もしa[i]=xではないときに出力
    # 逆に言えば、a[i]=xのときはスキップされる
    if a[i] != x:
        print(a[i], end=" ")

# 最後に改行
print()
