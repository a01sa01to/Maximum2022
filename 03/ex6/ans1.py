A, op, B = map(str, input().split())
A, B = int(A), int(B)

if op == '+':
    print(A + B)
if op == '-':
    print(A - B)
if op == '*':
    print(A * B)
if op == '/':
    if(B == 0):
        print('error')
    else:
        print(A // B)
if op == '?':
    print("error")
if op == '=':
    print("error")
if op == '!':
    print("error")
