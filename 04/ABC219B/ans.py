# 入力
s1 = input()
s2 = input()
s3 = input()
t = input()

# 繰り返し
# print関数は、デフォルトでは毎回改行されてしまうので、end=""とすることで改行をしないようにする
for i in range(len(t)):
    if t[i] == '1':
        print(s1, end="")
    elif t[i] == '2':
        print(s2, end="")
    elif t[i] == '3':
        print(s3, end="")
