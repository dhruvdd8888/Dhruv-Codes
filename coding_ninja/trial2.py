count=1
for i in range(5):
    for j in range(1,i+1):
        print(j,end="  ")
        # count+=1
    print()


# z=[]
# def pairSum(arr, s):
#     t=[]
#     f=0
#     for i in range(0,N):
#         for j in range(i,N):
#             if(arr[i]+arr[j]==s and i!=j):
#                 t=[arr[i],arr[j]]
#                 f=1
#                 arr[j]=-10000
#                 arr[i]=-100000
#                 break
#         if(f):
#             z.append(t)
#             f=0
#     if(len(z)==0):
#         z.append([-1,-1])
# t=int(input())
# while(t):
#     t-=1
#     z=[]
#     a = [int(i) for i in input().split()][:2]
#     N=a[0]
#     s=a[1]
#     arr = [int(i) for i in input().split()][:N]
#     pairSum(arr,s)
#     for i in z:
#         i.sort()
#     z.sort()
#     for i in z:
#         print('{} {}'.format(i[0],i[1]))

