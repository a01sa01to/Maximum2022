# 関数の定義
def f(year: int, r: int, d: int, x2000: int) -> int:
    # 2000年なら、x2000を返す
    if year == 2000:
        return x2000
    # そうでなければ、r * f(year-1) - d を返す
    return r * f(year - 1, r, d, x2000) - d


r, d, x2000 = map(int, input().split())

# 2001年から2010年までの答えを返す
for year in range(2001, 2011):
    print(f(year, r, d, x2000))
