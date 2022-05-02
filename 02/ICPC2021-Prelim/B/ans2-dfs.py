def dfs(v, Graph, visited):
    # その点と隣接している頂点それぞれについて
    for next_v in Graph[v]:
        # すでに訪問済みならスキップする
        if visited[next_v]:
            continue
        # 訪問済みにする
        visited[next_v] = True
        # 再帰的に訪問する
        dfs(next_v, Graph, visited)


while True:
    # 入力
    w, h = map(int, input().split())

    # もしwとhが両方0であれば、終了
    if w + h == 0:
        break

    # 決められたマスからグラフを生成
    # グラフは[上1, 上2, ..., 上w, 左1, 左2, ..., 左h]とする
    Graph = [[] for _ in range(w + h)]
    for _ in range(w + h - 1):
        x, y, n = map(int, input().split())
        x -= 1
        y -= 1
        Graph[x].append(y+w)
        Graph[y+w].append(x)

    # 訪問済みか管理する配列
    # 上端の一番左からスタートする
    visited = [False] * (w + h)
    visited[0] = True
    dfs(0, Graph, visited)

    # 未確定の場所があるか調べる
    # この場合、訪問済みのマスの個数 = w+h かどうかをチェックしている
    # 未訪問の場所があればNo、そうでなければYes。
    if sum(visited) == w + h:
        print('YES')
    else:
        print('NO')
