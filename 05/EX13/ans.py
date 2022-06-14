# 入力
n = int(input())
a = list(map(int, input().split()))

# 平均値を求める
avg = sum(a) // n

# 偏差を求め、出力
for i in range(n):
    print(abs(a[i] - avg))
