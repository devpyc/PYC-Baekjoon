import sys
import bisect
input = sys.stdin.readline

def binary_search(arr,value):
    index=bisect.bisect_left(arr,value)
    return index!=len(arr) and arr[index]==value

n=int(input())
a=list(map(int,input().split()))
a.sort()

m=int(input())
b=list(map(int,input().split()))

for i in b:
    print(1 if binary_search(a,i) else 0)