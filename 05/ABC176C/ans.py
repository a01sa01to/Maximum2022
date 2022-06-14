# 入力
n = int(input())
a = list(map(int, input().split()))

ans = 0
for i in range(n):
    # a[i-1] にアクセスするので、配列外参照を防ぐ
    if i == 0:
        continue

    if a[i - 1] > a[i]:
        # 前の人のほうが身長高いとき、踏み台を使って、同じ高さにする
        ans += a[i - 1] - a[i]
        a[i] = a[i - 1]

# 出力
print(ans)
