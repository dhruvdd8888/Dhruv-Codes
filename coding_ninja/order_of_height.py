def findOrder(height, infront):
    origin=height.copy()
    n=len(height)
    height.sort()
    lend=[]
    for i in range(n-1,-1,-1):
        t=infront[origin.index(height[i])]
        lend.insert(t,height[i])        
    # print(*lend)    
    # print('{} {}'.format for k in enumerate(lst))
    # print('\n'.join('{}'.format for k in enumerate(lend)))
    for i in lend:
        print(i,end=" ")
    print()
t=int(input())
while(t):
    n=int(input())
    height = [int(i) for i in input().split()][:n]
    infront= [int(i) for i in input().split()][:n]
    findOrder(height,infront)
    t-=1