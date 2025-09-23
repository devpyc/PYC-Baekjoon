n=int(input())

for i in range(n):
    c=int(input())
    ans=[0,0,0,0]
    ans[0]+=c//25
    c=c%25
    ans[1]+=c//10
    c=c%10
    ans[2]+=c//5
    c=c%5
    ans[3]+=c
    print(*ans)