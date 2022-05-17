# 入力
a, b, c = map(int, input().split())

# A=Bなら、明らかに等しい
if a == b:
    print("=")

# AのC乗・BのC乗が、異符号かどうかを判定する
# 異符号となるのは、Cが奇数で、A*Bが負の数であるとき
elif (c % 2 == 1) and (a * b < 0):
    # この場合、A,Bのうち、負のほうが小さい
    print("<" if a < 0 else ">")

# AのC乗・BのC乗が、同符号のとき
else:
    # 絶対値で比較する
    # abs関数という、絶対値を求める関数を用います
    a = abs(a)
    b = abs(b)

    # 絶対値の小さいほうが、小さい
    # 同じなら、同じ
    if(a == b):
        print("=")
    else:
        print("<" if a < b else ">")
