for _ in range(int(input())):
    a,b,c = map(int, input().split())
    mx = a+b+c-max(a,b,c)+1
    print("NO" if mx < max(a,b,c) else "YES")
