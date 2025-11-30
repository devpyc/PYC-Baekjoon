import sys

input=sys.stdin.readline
n = int(input())

arr=[]

for _ in range(n):
    x,y=map(int,input().split())
    arr.append((x,y))

arr.sort()

ans=0
l=-10**18
r=-10**18

for x,y in arr:
    if r<x:
        ans+=r-l
        l=x
    if r<y:
        r=y

ans+=r-l
print(ans)