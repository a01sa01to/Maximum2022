while True:
    # 入力
    n,  m = map(int, input().split())
    if n + m == 0:
        break
    Scores = []
    for i in range(m):
        Scores.append(list(map(int, input().split())))

    # それぞれの合計点を求める
    Sums = []
    for i in range(m):
        for j in range(n):
            if i == 0:
                Sums.append(Scores[i][j])
            else:
                Sums[j] += Scores[i][j]

    # 最大値を出力
    print(max(Sums))
