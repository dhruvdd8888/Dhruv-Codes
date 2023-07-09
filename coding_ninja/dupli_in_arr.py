def findDuplicate(a:list, n:int):
    arr.sort()
    for i in range(0,n-1):
        if(a[i]==a[i+1]):
            print(a[i])
            return

t=int(input())
while(t):
    n=int(input())
    arr = [int(i) for i in input().split()][:n]
    findDuplicate(arr,n)
    t-=1