# 入力
h, w = map(int, input().split())
r, c = map(int, input().split())

# まず答えを4にする
ans = 4

# 上がない
if r == 1:
    ans -= 1
# 下がない
if r == h:
    ans -= 1
# 左がない
if c == 1:
    ans -= 1
# 右がない
if c == w:
    ans -= 1

# 出力
print(ans)
