# 入力
n = int(input())

# 答えを格納する変数
ans = 0

# 1からnまでの数全部を調べる
for x in range(1, n + 1):
    # 10進数のときを調べる
    check10 = False

    # 一時的な変数
    # xを直接書き換えてはいけないため（数が戻ってしまうため）
    t = x
    while t > 0:
        # 桁が7のとき
        if t % 10 == 7:
            check10 = True
            break
        # 10で割り、切り捨て
        t //= 10

    # 8進数のときを調べる
    check8 = False
    # 一時的な変数tをxに戻す
    t = x
    while t > 0:
        # 桁が7のとき
        if t % 8 == 7:
            check8 = True
            break
        # 8で割り、切り捨てる
        t //= 8

    # もしどちらにも7が含まれないとき、答えに加算する
    if not check10 and not check8:
        ans += 1

# 答えを出力する
print(ans)
