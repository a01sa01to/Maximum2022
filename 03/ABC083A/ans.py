a, b, c, d = map(int, input().split())

left = a+b
right = c + d

if left < right:
    print("Right")
if left == right:
    print("Balanced")
if left > right:
    print("Left")
