while True:
    # 入力
    m, n, p = map(int, input().split())
    if m + n + p == 0:
        break

    # bitsetを生成する
    # ...と言いたいが、Pythonにはbitsetはないため、整数のbit演算で代用する
    infected = 0
    # p番目の人を感染状態にする
    infected |= 1 << (p-1)

    for i in range(n):
        a, b = map(int, input().split())

        # aが感染していた場合
        if infected & (1 << (a-1)):
            # bも感染させる
            infected |= 1 << (b-1)

        # bが感染していた場合
        if infected & (1 << (b-1)):
            # aも感染させる
            infected |= 1 << (a-1)

    # 感染者の人数を出力
    # bitが1になっている数 = 2進数表記した時の1の数
    print(bin(infected).count('1'))
