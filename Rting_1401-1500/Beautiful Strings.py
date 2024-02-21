mod = 1000000007
for _ in range(int(input())):
    n = int(input())
    s = sorted(input())
    i = 0
    ans = 1
    while i < n:
        cnt = 1
        while i < n-1 and s[i] == s[i+1]:
            cnt+=1
            i += 1
        ans = (ans * (cnt + 1)) % mod
        i += 1
    print(ans - 1)
