import queue

class BinaryTreeNode:
    
    def __init__(self, data):
        
        self.data = data
        self.left = None
        self.right = None
nodes=[]
def traverse(root):
    elems=[]
    if(root):
        if(root!=-1):
            elems.extend(traverse(root.left))
            elems.extend(traverse(root.right))
            elems.append(root.data)
    if(len(elems)):nodes.append(elems),nodes.append(root.data)
    return(elems)


def lcaOfThreeNodes(root, node1, node2, node3):
    
    li=traverse(root) 
    # flag=0
    for i in range (0,len(nodes)):
        if(~i&1):
            if(node1 in nodes[i] and node2 in nodes[i] and node3 in nodes[i] ):
                # print(nodes[i])
                # if(nodes[i][-1]!=node1 and nodes[i][-1]!=node2 and nodes[i][-1]!=node3):
                    # flag=1
                # if(flag):
                return(nodes[i+1])
                # flag=1
    


# Building the tree.
def buildLevelTree(levelorder):
    
    index = 0
    length = len(levelorder)
    
    if length<=0 or levelorder[0]==-1:
        return None
    
    
    root = BinaryTreeNode(levelorder[index])
    index += 1
    
    q = queue.Queue()
    q.put(root)
    
    while not q.empty():
        
        currentNode = q.get()
        leftChild = levelorder[index]
        index += 1
        
        if leftChild != -1:
            
            leftNode = BinaryTreeNode(leftChild)
            currentNode.left =leftNode
            q.put(leftNode)
            
        rightChild = levelorder[index]
        index += 1
        
        
        if rightChild != -1:
            
            rightNode = BinaryTreeNode(rightChild)
            currentNode.right =rightNode
            q.put(rightNode)
            
            
    return root
    
t = int(input())

while t > 0:
    arr = [int(i) for i in input().split()][:3]
    li = [int(i) for i in input().split()]
    root = buildLevelTree(li)
    print(lcaOfThreeNodes(root, arr[0], arr[1], arr[2]))
    t = t - 1
    nodes=[]
        

