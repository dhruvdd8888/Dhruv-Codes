# # class a:
# #     def pr(self):
# #         print("a")
# # class b(a):
# #     def pr(self):
# #         super().pr()
# #         print("b")
# # class c(b):
# #     def pr(self):
# #         super().pr()
# #         print("c")

# # o=c()
# # print(o.pr())

# # d=[]
# # for i in range(5):
# #     for j in range(5):
# #         d.append((i,j))
# # print(d)
# # d=set()
# # for i in range(5):
# #     for j in range(5):
# #         if i!=j:
# #             d.add(tuple(sorted((i,j))))
# # print(sorted(d))
# # from collections import defaultdict
# # d=defaultdict(list)
# # for i in range(5):
# #     for j in range(i+1,5):
# #         d[i].append(j)
# #         d[j].append(i)

# # print(d)


# # from heapq import heapify,heappop,heappush
# # q=[1,2,4,5,10,-1]
# # heapify(q)
# # print(heappop(q))


# # for i in range(1000):
#     # if i**0.5%1==0:print(i,end="    ")

# # for i in range(1,40):
# #     if 10<i<15:print(i)



# nums=[1,2,5,9]

# nums=[-2,0,2]
# nums=[-14, -11, 8,10]#, 13]

# ans=0
# for i in range(len(nums)):
#     for j in range(i+1,len(nums)):
#         # ans+=ans*i+nums[j]-nums[i]
#         print(i,"-",j,nums[j]-nums[i])
#         ans+=nums[j]-nums[i]

# print(ans)

# ans=0
# # nums=[i+12 for i in nums]

# for i in range(1,len(nums)):
#     ans+=ans+i*(nums[i]-nums[i-1])
#     print(ans)
    


# print(ans)


# import numpy as np  
# a=np.array([[1,3],[2,4]])
# # print(a[[False,True ,False,False]])
# print(a.max(axis=1))


n=10
p=100_000_001
ans=0
for i in range(n,p):
    ans+=1

print(ans)