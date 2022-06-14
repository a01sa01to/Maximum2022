# 入力
s = input()

# 反転させる
s = s[::-1]

# 各文字に対する処理
for i in range(len(s)):
    if s[i] == '6':
        s = s[:i] + '9' + s[i+1:]
    elif s[i] == '9':
        s = s[:i] + '6' + s[i+1:]

# 出力
print(s)
