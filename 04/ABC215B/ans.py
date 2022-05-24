# 入力
n = int(input())

# 答えを求める
# Pythonだとpowを使っても大丈夫（int型として求まるので）
k = 0
while pow(2, k+1) <= n:
    k += 1

# 出力
print(k)
