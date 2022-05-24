# 入力
n = int(input())
s = input().split()

# 黄色があるかどうかを格納する変数
yellow = False

# 各色をチェックする
for i in range(n):
    if s[i] == "Y":
        yellow = True
    # ほかの色は、必ず存在することが保証されているので、無視してよい

# 黄色があればFour
if yellow:
    print("Four")
else:
    print("Three")
