while True:
    # 入力
    m, n, p = map(int, input().split())
    if m + n + p == 0:
        break

    # m人のbool配列を生成する（初期値はfalse）
    infected = [False] * m
    # p番目の人を感染状態(=true)にする
    infected[p - 1] = True

    for i in range(n):
        a, b = map(int, input().split())

        # aが感染していた場合
        if infected[a - 1]:
            # bも感染させる
            infected[b - 1] = True

        # bが感染していた場合
        if infected[b - 1]:
            # aも感染させる
            infected[a - 1] = True

    # 感染者の人数を出力
    print(infected.count(True))
