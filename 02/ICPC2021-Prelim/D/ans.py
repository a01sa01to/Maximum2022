# このままだとTLE/MLEするので注意
MAX = 1000
while True:
    # 入力
    n = int(input())

    # n=0なら終了
    if n == 0:
        break

    # それぞれのポールの風船の数を入力する
    b = list(map(int, input().split()))

    # dp[k][x][y] = k番目まで見たとき、1番目のグループをx個、2番目のグループをy個にできるか？
    dp = [[[False] * (MAX) for _ in range(MAX)] for _ in range(n + 1)]

    # 最初の時点は明らかにすべて0個しかありえない
    dp[0][0][0] = True

    # 計算する
    for k in range(n):
        for x in range(MAX):
            for y in range(MAX):
                # もしk番目を追加するか決める前に、1番目のグループをx個、2番目のグループをy個にできる場合
                if dp[k][x][y]:
                    # k番目を追加して、1番目のグループを x+b[i] 個にできる
                    if x + b[k] < MAX:
                        dp[k + 1][x + b[k]][y] = True

                    # k番目を追加して、2番目のグループを y+b[i] 個にできる
                    if x + b[k] < MAX:
                        dp[k + 1][x][y + b[k]] = True

                    # k番目を追加して、3番目のグループを (あまり) 個にできる
                    if x + b[k] < MAX:
                        dp[k + 1][x][y] = True

    # すべての風船の合計個数
    Sum = sum(b)

    # できる組み合わせの最小値を最大にしたい
    ans = 0
    for x in range(MAX):
        for y in range(MAX):
            if dp[n][x][y]:
                # 可能性のある組み合わせであった場合、最小値は x,y,sum-x-yのどれか
                minimum = min(x, y, Sum - x - y)

                # もし現時点での答えより大きければ、更新する
                ans = max(ans, minimum)

    print(ans)
