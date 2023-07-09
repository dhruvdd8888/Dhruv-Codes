def runningCircles():
    L=int(input("Length of track"))
    N=int(input("Number of rounds"))

    D=[]
    C=[]
    for i in range (0,N):
        D.append(int(input("Distance ")))
        C.append(input("Direction "))

    C.append("X")
    laps=0
    c=0
    a=0
    for i in range (0,N):
        if(C[i]=="c"):
            c=c+D[i]
            print(c)            
        if(C[i]=="a"):
            a=a+D[i]
            print(a)      
        if(C[i]!=C[i+1]):
            if(C[i]=="c"):
                laps+=abs(int(c/L))
                a=c%L-L
                print(i,"  a",a,"c",c)
            if(C[i]=="a"):
                laps+=abs(int(a/L))
                c=a%L-L            
                print(i,"  a",a,"c",c)

    print("Laps = ",laps)      

testSets=int(input("test sets "))
for i in range (0,testSets):
    runningCircles()
