while True:
    # 入力
    n = int(input())
    if n == 0:
        break
    a = list(map(int, input().split()))

    # 答えを格納する変数
    ans = 0

    # i+3を参照するので、i+3 < n でなければならない
    # すなわち、i < n-3 までループする
    for i in range(n-3):
        # 「2 0 2 0」 の並びであれば、カウントアップする
        if a[i] == 2 and a[i + 1] == 0 and a[i + 2] == 2 and a[i + 3] == 0:
            ans += 1

    # 出力
    print(ans)
