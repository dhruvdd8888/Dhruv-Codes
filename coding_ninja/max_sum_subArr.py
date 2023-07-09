from sys import stdin,setrecursionlimit
setrecursionlimit(1000)

def maxSubarraySum(arr, n) :
    sums=[]
    for i in range(0,n):
        total=0
        for j in range(0,n):
            l=max(i,j)
            u=min(i,j)
            # for k in range(u,l):
            total+=arr[j]
            sums.append(total)
    arr.append(0)
    sums.extend(arr)
    return(max(sums, key=lambda ele: int(ele)) )    
# def takeInput() :
#     n =  int(input())
#     if(n == 0) :
#         return list(), n
#     arr = list(map(int, stdin.readline().strip().split(" ")))

#     return arr, n
# arr, n = takeInput()

n=int(input())
arr = [int(i) for i in input().split()][:n]
print(maxSubarraySum(arr, n))

