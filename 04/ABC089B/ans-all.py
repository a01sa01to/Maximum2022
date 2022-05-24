# 入力
n = int(input())
s = input().split()

# 各色があるかどうかを格納する変数
pink = False
white = False
green = False
yellow = False

# 各色をチェックする
for i in range(n):
    if s[i] == "P":
        pink = True
    elif s[i] == "W":
        white = True
    elif s[i] == "G":
        green = True
    elif s[i] == "Y":
        yellow = True

# 4色あればFour
if pink and white and green and yellow:
    print("Four")
# 3色あればThree
elif pink and white and green:
    print("Three")
