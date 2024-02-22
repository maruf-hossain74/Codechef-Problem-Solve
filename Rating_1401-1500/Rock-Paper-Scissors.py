for _ in range(int(input())):
    n = int(input())
    s = input()
    R,S,P = 0,0,0
    for i in range(n):
        if s[i] == 'R':
            R+=1
        elif s[i] == 'S':
            S += 1
        else:
            P += 1
    need = (n//2)+1
    en = max(need - R,0)
    res = P + S
    lod = res - en
    for i in range(n):
        if s[i] == 'R':
            print('P',end = "")
        elif s[i] != 'R' and lod > 0:
            print('P',end = "")
            lod -= 1
        elif s[i] == 'P':
            print('S',end = "")
        elif s[i] ==  'S':
            print('R',end = "")
    print()
