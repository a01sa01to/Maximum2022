# あらかじめsetを用意
st = set()

# s1 ～ s4 を入力し、それぞれをsetに挿入する
for i in range(4):
    s = input()
    st.add(s)

# set.sizeが4ならYes、そうでなければNo
print("Yes" if len(st) == 4 else "No")
