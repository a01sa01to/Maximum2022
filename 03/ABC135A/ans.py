# 入力
a, b = map(int, input().split())

# もしa+bが奇数（2で割ったあまりが1）なら、IMPOSSIBLE
if (a + b) % 2 == 1:
    print("IMPOSSIBLE")

# 偶数なら、(a+b)/2を出力
else:
    print((a + b) // 2)
