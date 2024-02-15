for _ in range(int(input())):
    n = input()
    s = input()
    a , b = '1', '0'
    ans1, ans2 = 0 , 0
    for i in s:
        if a == '1':
            ans1 += 1
        if b == '1':
            ans2 += 1
        if i != a:
            a = '1'
        else:
            a = '0'
        if b != i:
            b = '1'
        else:
            b = '0'
    print(max(ans1, ans2))
