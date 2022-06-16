while True:
    # 入力
    n = int(input())
    if n == 0:
        break
    a = list(map(int, input().split()))

    # 平均値を求める
    ave = sum(a) / n

    # 答えを求める
    ans = 0
    for i in range(n):
        if(a[i] <= ave):
            ans += 1

    # 出力
    print(ans)
