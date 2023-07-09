z=[]
def pairSum(arr, s):
    t=[]
    kill=-1
    f=0
    for i in range(0,N):
        if(i==kill):
            continue
        for j in range(i,N):
            if(arr[i]+arr[j]==s and i!=j):
                if(j==kill):
                    continue
                t=[arr[i],arr[j]]
                f=1
                kill=j
                break
        if(f):
            # z.append(t)
            # print(t)   
            # print('{} {}'.format(t[1], t[0]))
            z.append(t)
            # print(t)
            f=0
    if(len(z)==0):
        # print('{} {}'.format(-1,-1))
        z.append([-1,-1])

                    



# N=int(input())
t=int(input())
while(t):
    t-=1
    z=[]
    a = [int(i) for i in input().split()][:2]
    N=a[0]
    s=a[1]
    # s=int(input())
    arr = [int(i) for i in input().split()][:N]
    # arr=input().split()
    # for i in arr:i=1
    # print(arr)
    # for i in :
        # print('{} {}'.format(i[1], i[0]))
    pairSum(arr,s)
    for i in z:
        i.sort()
    z.sort()

    for i in z:
        print('{} {}'.format(i[0],i[1]))


    # x=[]
    # for i in z:
    #     t = ' '.join(map(str, i))
    #     x.append(t)
    # x = ''.join(map(str, x))
    # print(x)
    # print("1 4\n2 3")
