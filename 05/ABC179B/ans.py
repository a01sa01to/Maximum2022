# 入力
n = int(input())
d = [list(map(int, input().split())) for _ in range(n)]

# 答えを求める
ans = False
# i+2にアクセスするので、i+2<nになるようにする
for i in range(n-2):
    if d[i][0] == d[i][1] and d[i + 1][0] == d[i + 1][1] and d[i + 2][0] == d[i + 2][1]:
        ans = True
        break

# 出力
print('Yes' if ans else 'No')
