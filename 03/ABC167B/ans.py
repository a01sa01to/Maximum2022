# 入力
a, b, c, k = map(int, input().split())

# A≧Kなら、K枚の全部が1 → 答えはK
if a >= k:
    print(k)
# そうではなく、A+B≧Kなら、1がA枚、残りは0 → 答えはA
elif a + b >= k:
    print(a)
# そうではない場合、1がA枚、0がB枚、残りのK-A-B枚は-1 → 答えはA-(K-A-B) = 2A+B-K
else:
    print(2 * a + b - k)
