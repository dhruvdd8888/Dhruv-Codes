from sys import stdin,setrecursionlimit
setrecursionlimit(10**7)

class Trie :

    box=[]
    def __init__(self) :
        pass
    
    def insert(self, string) :
        self.box.append(string)

    
    def search(self, word) :
        if(self.box.count(word)):
                return True
        return False
        
    def startWith(self, prefix) :
        for i in self.box:
            if(i.find(prefix)==0):
                return True
        return False



# main
t = int(input().strip())
root = Trie()
for i in range(t) :

    q_str = stdin.readline().strip().split(" ")
    q = int(q_str[0].strip())
    str1 = q_str[1].strip()

    if(q == 1) :
        root.insert(str1)
    
    elif (q == 2) :
        if(root.search(str1)) :
            print("true") 

        else :
            print("false")
        
    else :
        if(root.startWith(str1)) :
            print("true")

        else :
            print("false")


