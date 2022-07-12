# 入力
n, q = map(int, input().split())

# 電車の初期化
# 全要素を(-1,-1)にする
# v[i].first = v[i]の前につながっている電車番号
# v[i].second = v[i]の後につながっている電車番号
v = [[-1, -1] for i in range(n)]

# q回繰り返す
for _ in range(q):
    # 入力
    inp = tuple(map(int, input().split()))
    if inp[0] == 1:
        t, x, y = inp
        # 0基準にする
        x -= 1
        y -= 1

        # 電車を連結する
        # 電車xの後ろに電車yをつなぐ
        v[x][1] = y
        # 電車yの前に電車xをつなぐ
        v[y][0] = x

    elif inp[0] == 2:
        t, x, y = inp
        # 0基準にする
        x -= 1
        y -= 1

        # 電車を分離する
        # 電車xの後ろは何もないものとする
        v[x][1] = -1
        # 電車yの前は何もないものとする
        v[y][0] = -1

    else:
        t, x = inp
        # 0基準にする
        x -= 1

        # 電車xの先頭まで行く
        now = x
        # 現在見ている電車につながっている電車があれば
        while v[now][0] != -1:
            # その前の電車にする
            now = v[now][0]

        # 答えを格納する配列
        ans = []
        # 先頭から一番後ろまで行く
        while now != -1:
            # その電車を追加する
            # 1基準にして追加
            ans.append(now + 1)
            # その後の電車にする
            now = v[now][1]

        # 出力
        # まず要素数を出力
        print(len(ans), end="")
        for x in ans:
            print(" ", x, end="")
        # 最後に改行
        print()
