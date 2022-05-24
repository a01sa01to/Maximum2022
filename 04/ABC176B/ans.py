# 入力
n = input()

# 各桁の和を保存しておく変数
sum_digit = 0

# 桁の数を加えていく
for i in range(len(n)):
    sum_digit += int(n[i])

# 各桁の和が9で割り切れるなら、Yes
if sum_digit % 9 == 0:
    print("Yes")
else:
    print("No")
