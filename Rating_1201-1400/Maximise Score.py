for _ in range(int(input())):
    n = int(input())
    arr = list(map(int,input().split()))
    ans = float('inf')
    for i in range(1,n-1):
        ans = min(ans,max(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1])))
    ans = min(ans,abs(arr[0]-arr[1]))
    ans = min(ans,abs(arr[-1]-arr[-2]))
    print(ans)
