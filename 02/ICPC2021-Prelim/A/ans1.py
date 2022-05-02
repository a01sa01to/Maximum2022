while True:
    # 入力
    a = list(map(int, input().split()))

    # もしすべての要素が0であれば終了
    if a == [0, 0, 0, 0]:
        break

    # ビー玉の入ったお椀が1以下ではない限り、続ける
    while len(a) > 1:
        # 小さい順にソートさせる
        a.sort()

        # 一番少ない数を、それぞれ引く（一番小さいものはa[0]）
        for i in range(1, len(a)):
            a[i] -= a[0]

        # お椀の数が0以下のものを削除する
        # つまり、0より大きいものだけを残す
        a = [x for x in a if x > 0]

    # 最終的に残ったものが答え
    print(a[0])
