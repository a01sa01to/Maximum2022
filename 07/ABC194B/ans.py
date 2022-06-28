# 入力
n = int(input())
a = []
b = []
for _ in range(n):
    _a, _b = map(int, input().split())
    a.append(_a)
    b.append(_b)

# 仮の答えを大きい数字にしておく
ans = 10**9

for i in range(n):
    for j in range(n):
        # もしi==jなら、1人で2つの仕事をする
        # つまりかかる時間は a[i] + b[i]
        # ansと比較して、小さい方をansに代入する
        if i == j:
            ans = min(ans, a[i] + b[i])
        # そうではない場合、2人のかかる時間の最大値
        # ansと↑を比較し、小さいほうをansに代入する
        else:
            ans = min(ans, max(a[i], b[j]))

# 出力
print(ans)
