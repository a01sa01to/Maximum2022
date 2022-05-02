# 入力
a, b, c, d = map(int, input().split())

left = a + b  # 天秤の左にあるおもり
right = c + d  # 天秤の右にあるおもり

# 出力
if left < right:
    print("Right")
if left == right:
    print("Balanced")
if left > right:
    print("Left")
