# 入力
n = int(input())

# オリジナルかどうかをチェックするset
st = set()
# 得点とそのindexを格納する
v = []

for i in range(n):
    # 入力
    s, x = input().split()
    x = int(x)

    if not s in st:
        # オリジナルなので、得点とindexを追加する
        st.add(s)
        v.append([x, i])

# 求める
maxim = (0, 0)
for score, idx in v:
    # 得点が高い場合、その得点とindexを更新する
    if score > maxim[0]:
        maxim = (score, idx)
    # 得点が同じ場合、indexが小さいほうを更新する
    # しかし、この実装では、indexが小さい順にみているのでその必要はない

# 出力
print(maxim[1] + 1)
