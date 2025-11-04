import sys
import bisect

input = sys.stdin.readline

def lower_bound(arr,target):
    n=len(arr)
    for i in range(n):
        if arr[i]<=target:
            return i
    return n

def lis(arr):
    lis=[]
    for x in arr:
        i=lower_bound(lis,x)
        if i==len(lis):
            lis.append(x)
        else:
            lis[i]=x
    return len(lis)

n=int(input())
arr=list(map(int,input().split()))

print(n-lis(arr))