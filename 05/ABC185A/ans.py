# 入力
data = list(map(int, input().split()))

# 最小値を求める（繰り返し処理を使う場合）
min_value = data[0]
for i in range(1, len(data)):
    if data[i] < min_value:
        min_value = data[i]
print(min_value)

# 最小値を求める（min関数を使う場合）
print(min(data))
