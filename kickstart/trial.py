L=4
N=3

D=[5,10,5]
C=['c','a','c']
# for i in range (0,N):
#     D.append(int(input("Distance ")))
#     C.append(input("Direction "))

C.append("x")
laps=0
c=0
a=0
for i in range (0,N):
    if(C[i]=="c"):
        c=c+D[i]
        print("c--",c)            
    if(C[i]=="a"):
        a=a+D[i]
        print("a--",a)      
    if(C[i]!=C[i+1]):
        if(C[i]=="c"):
            laps+=abs(int(c/L))
            a=0
            a=-1*((-1*c)%L)
            # c=0
            print(i,"  a",a,"c",c)
        if(C[i]=="a"):
            laps+=abs(int(a/L))
            c=0
            c=-1*((-1*a)%L)
            # a=0            
            print(i,"  a",a,"c",c)

print("Laps = ",laps)      