import sys
input=sys.stdin.readline

n=int(input())
arr=list(map(int,input().split()))
x=int(input())

arr.sort()
l=0
r=n-1
cnt=0

while l<r:
    sum=arr[l]+arr[r]
    if sum==x:
        cnt+=1
        r-=1
    elif sum<x:
        l+=1
    else:
        r-=1
print(cnt)