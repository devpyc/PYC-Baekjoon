import sys

input = sys.stdin.readline
n=int(input())

arr=[]

for i in range(n):
    x=int(input())
    if x!=0:
        arr.append(x)
    else:
        arr.pop()

ans=0

for i in arr:
    ans+=i

print(ans)