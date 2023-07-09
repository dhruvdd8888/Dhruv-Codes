def aggressiveCows(stalls, k):
    stalls.sort()
    points=[stalls[0],stalls[-1]]
    if(k>2):
        k=k-1
        d=int(sum(stalls)/k)
        return d
    return (points[-1]-points[0])
        
    
