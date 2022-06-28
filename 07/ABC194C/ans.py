# 入力
n = int(input())
a = list(map(int, input().split()))

# Ai^2 の総和
sum_a2 = sum(map(lambda x: x ** 2, a))
# Ai の総和
sum_a = sum(a)

# 答えを出力
print(n * sum_a2 - sum_a ** 2)
