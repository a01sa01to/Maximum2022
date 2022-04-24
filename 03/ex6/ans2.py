A, op, B = map(str, input().split())
A, B = int(A), int(B)

if op == '+':
    print(A + B)
elif op == '-':
    print(A - B)
elif op == '*':
    print(A * B)
elif op == '/' and B != 0:
    print(A // B)
else:
    print("error")
