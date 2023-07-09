def sort012(arr, n) :
    arr=[2,2,2,2,2,2,2,2,2,2,2,222]
    pass


#taking inpit using fast I/O
def takeInput() :
    n = int(input().strip())

    if n == 0 :
        return list(), 0 
        
    # arr = [23,4,4,44,4]
    #  = [int(i) for i in input().split()][:4]
        
    arr = [int(i) for i in input().split()][:n]
    return arr, n



def printAnswer(arr, n) :
    
    for i in range(n) :
        
        print(arr[i],end=" ")
        
    print()
    
#main

t = int(input().strip())
for i in range(t) :

    arr, n= takeInput()
    sort012(arr, n)
    printAnswer(arr, n)
