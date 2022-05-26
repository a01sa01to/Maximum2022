while True:
    # 入力
    n, m = map(int, input().split())
    if n + m == 0:
        break
    a = list(map(int, input().split()))
    w = list(map(int, input().split()))

    # 何も追加しない状態で測れるものを全列挙する
    c = []
    for i in range(m):
        # これまで加えたものに対して、現在見ているおもりを使って加えられるものを追加していく
        # 逆順にしないと、無限ループするので注意
        for j in range(len(c) - 1, -1, -1):
            c.append(c[j] + w[i])
            c.append(abs(c[j] - w[i]))
        # 現在見ているおもりだけを使っても測れる
        c.append(w[i])

    # 便宜上、0も測れるものとする
    c.append(0)

    # 全列挙したものをsetとして扱う
    ct = set(c)
    # 重複削除
    ct = list(ct)

    # 答えとなりうるものを格納するset
    ans = set()

    # 一回でもsetに追加したかを格納する変数
    ft = False

    # 荷物は測れるかどうか
    for i in range(len(a)):
        # 何も追加しなくても測れる
        if a[i] in ct:
            continue

        # まだ何も追加していないとき、初期化
        if not ft:
            for j in range(len(c)):
                ans.add(abs(c[j] - a[i]))
                ans.add(c[j] + a[i])
            ft = True
        # そうではない場合、共通部分をとっていく
        else:
            tmp = set()
            for j in range(len(c)):
                x = abs(c[j] - a[i])
                y = c[j] + a[i]
                if x in ct:
                    tmp.add(x)
                if y in ct:
                    tmp.add(y)
            ans = tmp

    # もし何も追加していない = 何も追加しなくてもすべて測れる
    if not ft:
        print(0)
    # 共通部分がない
    elif len(ans) == 0:
        print(-1)
    # 共通部分のうち、最小値
    else:
        print(min(ans))
