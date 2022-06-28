# 入力
n, x = map(int, input().split())
a = list(map(int, input().split()))

# a[i] == x となる要素を削除
new_a = [str(ai) for ai in a if ai != x]

# 出力
print(" ".join(new_a))
