def copyAndReverse(arr):
    t=int(input())
    while t:
        N=int(input())
        arr = [int(i) for i in input().split()][:N]
        t=t-1
        arr.reverse()
        print(*arr)
