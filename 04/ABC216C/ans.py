# 入力
n = int(input())

# 答えを格納する変数
ans = ""

# 処理
while n > 0:
    # 操作A' : 奇数なら、1減らす
    if n % 2 == 1:
        n -= 1
        ans += "A"
    # 操作B' : 偶数なら、2で割る
    else:
        n //= 2
        ans += "B"

# 答えが逆になっているので、逆転させる
ans = ans[::-1]

# 出力
print(ans)
