# まだ確定していないときの値（10^9）とした
UNDEFINED = 10**9

while True:
    # 入力
    w, h = map(int, input().split())

    # もしwとhが両方0であれば、終了
    if w + h == 0:
        break

    # 決められたマスを受け取る
    Grid = [[UNDEFINED] * h for _ in range(w)]
    for _ in range(w+h-1):
        x, y, n = map(int, input().split())
        Grid[x-1][y-1] = n

    # 上端・左端のマスの配列
    Top = [UNDEFINED] * w
    Left = [UNDEFINED] * h

    # 上端の一番左を0にする
    Top[0] = 0

    while True:
        # 更新されたかを管理する
        updated = False

        for i in range(w):
            for j in range(h):
                # 上・左が決まっていて、マスが未確定なら決める
                if Top[i] != UNDEFINED and Left[j] != UNDEFINED and Grid[i][j] == UNDEFINED:
                    Grid[i][j] = Top[i] + Left[j]
                    updated = True

                # 左とマスが決まっているが、上が決まっていない
                if Left[j] != UNDEFINED and Grid[i][j] != UNDEFINED and Top[i] == UNDEFINED:
                    Top[i] = Grid[i][j] - Left[j]
                    updated = True

                # 上とマスが決まっているが、左が決まっていない
                if Top[i] != UNDEFINED and Grid[i][j] != UNDEFINED and Left[j] == UNDEFINED:
                    Left[j] = Grid[i][j] - Top[i]
                    updated = True

        # 更新されなかったら終了
        if not updated:
            break

    # 未確定の場所があるか調べる
    existsUndefined = False
    for i in range(w):
        if Top[i] == UNDEFINED:
            existsUndefined = True
    for i in range(h):
        if Left[i] == UNDEFINED:
            existsUndefined = True
    for i in range(w):
        for j in range(h):
            if Grid[i][j] == UNDEFINED:
                existsUndefined = True

    # 未確定の場所があればNo、そうでなければYes。
    print("NO" if existsUndefined else "YES")
