# 入力
n = int(input())
a = list(map(int, input().split()))

# 個数を数える
cnt = {}
for i in a:
    if i in cnt:
        cnt[i] += 1
    else:
        cnt[i] = 1

# 最大値を求める
# 仮に、制約的にあり得ない値(-1)にしておく
maxValue = -1
maxCount = -1
for i in cnt:
    # 個数が多い場合には更新
    if cnt[i] > maxCount:
        maxValue = i
        maxCount = cnt[i]

# 出力
print(maxValue, maxCount)
