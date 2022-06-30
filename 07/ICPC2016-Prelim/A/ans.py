while True:
    # 入力
    n = int(input())
    if n == 0:
        break
    a = list(map(int, input().split()))

    # 最小値を求める
    # 仮の答えは、大きいものにしておく
    ans = 10**9
    for i in range(n):
        for j in range(i+1, n):
            ans = min(ans, abs(a[i] - a[j]))

    # 出力
    print(ans)
