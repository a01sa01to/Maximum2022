# Python、TLEしました！

while True:
    # 入力
    m, n = map(int, input().split())
    if m + n == 0:
        break

    # 最大値
    INF = 7500000
    # 咲かないかどうか
    boring = [True] * INF
    # エラトステネスの篩
    for i in range(m, INF):
        # もし咲かない場合、新しい区画に埋める
        if boring[i] and n > 0:
            # 咲くことにする
            boring[i] = False
            # 区画を減らす
            n -= 1
            # その倍数を咲くことにする
            for j in range(2 * i, INF, i):
                boring[j] = False

    # 初めて咲かない年を求める
    for i in range(m, INF):
        if not boring[i]:
            print(i)
            break
