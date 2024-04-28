for _ in range(int(input())):
    n, A = map(int, input().split())
    if n == 1:
        print(8)
    elif A%8==0:
        print(A)
    else:
        A -= A%10
        for i in range(10):
            if A%8==0:
                print(A)
                break;
            else:
                A += 1
