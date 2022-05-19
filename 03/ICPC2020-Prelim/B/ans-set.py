while True:
    # 入力
    m, n, p = map(int, input().split())
    if m + n + p == 0:
        break

    # 感染者のセットを作り、最初の感染者 p をセットに入れる
    infected = set([p])

    for i in range(n):
        a, b = map(int, input().split())

        # aが感染者セットに入っていた場合
        if a in infected:
            # bも感染者セットに入れる
            infected.add(b)

        # bが感染者セットに入っていた場合
        if b in infected:
            # aも感染者セットに入れる
            infected.add(a)

    # 感染者セットの人数を出力
    print(len(infected))
