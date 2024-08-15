for _ in range(int(input())):
    x,y = map(int, input().split())
    print((2*y)+1 if x > y else -1)
