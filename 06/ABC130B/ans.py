def f(i:  int, l: list) -> int:
    # D1 = 0
    if i == 0:
        return 0
    # Di = D(i-1) + l(i-1)
    return f(i-1, l) + l[i-1]


n, x = map(int, input().split())
l = list(map(int, input().split()))

# 繰り返し処理で何回までできるか求める
for i in range(n+1):
    # 次跳ねたら領域外に出る場合
    # 今回はギリギリ領域外に出ないので、これが答え
    # 答えを出力して、ループを抜ける
    if f(i + 1, l) > x:
        # 配列は0から始まるが、答えは1から始まるので+1する
        print(i+1)
        break
