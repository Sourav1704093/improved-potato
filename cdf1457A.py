for _ in range(int(input())):
    n,m,r,c = list(map(int,input().split()))
    ans = max(n-r+m-c,c-1+r-1)
    print(ans)