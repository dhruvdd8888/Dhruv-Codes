def maxNonDecreasingLength( nums1, nums2):
        prev=min(nums1[0],nums2[0])
        nums1.append(-1)
        nums2.append(-1)
        tans=1
        ans=0
        for i in range(1,len(nums1)):
            x=min(nums1[i],nums2[i])
            y=max(nums1[i],nums2[i])
            print(tans,prev,x,y)
            if x>=prev:
                prev=x
                tans+=1
            elif y>=prev:
                prev=y
                tans+=1
            else:
                prev=x
                ans=max(ans,tans)
                print(i)
                tans=0
            
        return ans
                

s=[1,2,10,4]
t=[1,2,3,8]

# s=[8,12,3,40]
# t=[10,1,2,11]

s=[2,3,1]
t=[1,2,1]
# s=[1,3,2,1]
# t=[2,2,3,4]
# s=[1,1]
# t=[2,2]
# s=[1,2,10,4]
# t=[1,2,3,8]
print(maxNonDecreasingLength(s,t))




# # print(list(range(999)))

# # from os import cache
# def maximumJumps( nums, target: int) -> int:
#         def calc(i):
#             print(i)
#             if i<1:
#                 dp[0]=(0,True)
#                 return 0,True
#             if dp[i][0]!=-1:return dp[i]
            
#             for j in range(i-1,-1,-1):
#                 if abs(nums[j]-nums[i])<=target:
#                     # dist,condi=calc(j)
#                     if dp[j][1]:
#                         dist,condi=dp[j]
#                     else:
#                         dist,condi=calc(j)
#                     if condi:
#                         if dp[i][0]<1+dist:
#                             dp[i]=(1+dist,condi)
            
#             return dp[i]
        
#         dp=[(-1,False)]*len(nums)
#         calc(len(nums)-1)
        
        
#         return dp[-1][0] if dp[-1][1] else -1


# x=list(range(10))
# x=[-1,-2,-4,-2,-3]
# t=0

# print(maximumJumps(x,t))









# # You are given two integers m and n representing the dimensions of a 0-indexed m x n grid.

# # You are also given a 0-indexed 2D integer matrix coordinates, where coordinates[i] = [x, y] indicates that the cell with coordinates [x, y] is colored black. All cells in the grid that do not appear in coordinates are white.

# # A block is defined as a 2 x 2 submatrix of the grid. More formally, a block with cell [x, y] as its top-left corner where 0 <= x < m - 1 and 0 <= y < n - 1 contains the coordinates [x, y], [x + 1, y], [x, y + 1], and [x + 1, y + 1].

# # Return a 0-indexed integer array arr of size 5 such that arr[i] is the number of blocks that contains exactly i black cells.


# # class Solution:
# def countBlackBlocks( m: int, n: int, coordinates):
#     blocks = [0] * 5

#     for x, y in coordinates:
#         if x!=m-1 and y!=n-1:
#             count = 1
#             if [x+1, y] in coordinates:
#                 count += 1
#             if [x, y+1] in coordinates:
#                 count += 1
#             if [x+1, y+1] in coordinates:
#                 count += 1
            
#         if x!=m-1 and y==n-1:
#             count = 1
#             if [x+1, y] in coordinates:
#                 count += 1
#             if [x, y+1] in coordinates:
#                 count += 1
#             if [x+1, y+1] in coordinates:
#                 count += 1
            
#         if x!=m-1 and y!=n-1:
#             count = 1
#             if [x+1, y] in coordinates:
#                 count += 1
#             if [x, y+1] in coordinates:
#                 count += 1
#             if [x+1, y+1] in coordinates:
#                 count += 1
            
#         if x!=m-1 and y!=n-1:
#             count = 1
#             if [x+1, y] in coordinates:
#                 count += 1
#             if [x, y+1] in coordinates:
#                 count += 1
#             if [x+1, y+1] in coordinates:
#                 count += 1
            
#             blocks[count]+=1

#     return blocks

# m = 3
# n = 3
# coordinates = [[0,0],[1,1],[0,2]]
# print(countBlackBlocks(m,n,coordinates))

# # print(int(3==4-1))

# # count=int((i,j) in blacks)
# # count+=int((i+1,j) in blacks)
# # count+=int((i,j+1) in blacks)
# # count+=int((i+1,j+1) in blacks)

# # class los:
# #     def hehe(self,s):
# #         def calc(s):
# #             if len(s.replace("-",""))==0:
# #                 self.ans=min(self.ans,len(s))
# #             for i in bins:
# #                 if i in s:
# #                     calc(s.replace(i,"-"))
                        
        
# #         bins=[bin(5**i)[2:] for i in range(7)]
    
# #         self.ans=1000
# #         calc(s)
        
# #         return -1 if self.ans==1000 else self.ans
            
# # s="111"
# # s="1011"
# # s="1"

# # s="1"
# # s="101"
# # s="11001"
# # s="1111101111"
# # s="1001110001"
# # s="110000110101"
# # s="11110100001001"
# # xx=los()
# # print(xx.hehe(s))



# # for i in range(7):
# #     print(bin(5**i)[2:])
# #     print(len(bin(5**i)[2:]))




# # def alternatingSubarray( nums):
# #         ans=-1
# #         tans=2

# #         diff=[0]*(len(nums)-1)
# #         for i in range(len(nums)-1):
# #             diff[i] = nums[i]-nums[i+1]
        
        
# #         diff.append(3)
# #         for i in range(len(diff)):
# #             if diff[i] in (-1,1):
# #                 tans=2
# #                 for j in range(i+1,len(diff)):
# #                     if diff[j-1]==1:
# #                         if diff[j]==-1:
# #                             tans+=1
# #                         else:
# #                             ans=max(ans,tans)
# #                             tans=2
# #                             break
# #                     if diff[j-1]==-1:
# #                         if diff[j]==1:
# #                             tans+=1
# #                         else:
# #                             ans=max(ans,tans)
# #                             tans=2
# #                             break

                

# #         return ans
        

# # # s=[4,3,2,3,2]
# # s=[20,40,20]
# # s=[21,2,3,2,3,2]

# # s=[2,3]
# # s=[2,5]
# # print(alternatingSubarray(s))