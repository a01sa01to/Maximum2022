def p(i: int) -> None:
    # i=1なら1と空白を出力
    if i == 1:
        print("1", end=" ")
    # それ以外なら、i-1までの結果を出力して、iと空白を出力して、またi-1までの結果を出力する
    else:
        p(i - 1)
        print(i, end=" ")
        p(i - 1)


n = int(input())
p(n)
