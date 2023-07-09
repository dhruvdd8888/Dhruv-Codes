import sys
sys.setrecursionlimit(10**7)

def twoSum(arr, target, n):

	hashMap = {}

	ans = []

	for i in range(n):
		if arr[i] in hashMap:
			hashMap[arr[i]] += 1
		else:
			hashMap[arr[i]] = 1

		if target - arr[i] not in hashMap:
			continue

		if target - arr[i] == arr[i]:
			
			# Valid pair will only exist if frequency of arr[i] is greater than 1.
			if hashMap[arr[i]] > 1:
				ans.append([arr[i], arr[i]])

				# Frequency will decrease by 2 
				hashMap[arr[i]] -= 2
		else:

			# For a valid pair frequency of arr[i] and target-arr[i] must be greater than 0.
			if hashMap[arr[i]] > 0 and hashMap[target - arr[i]] > 0:
				ans.append([arr[i], target - arr[i]])

				# Frequency will decrease by 1.
				hashMap[arr[i]] -= 1
				
				hashMap[target - arr[i]] -= 1


	# If no valid pair exists.
	if len(ans) == 0:
		ans.append([-1, -1])
	print(hashMap)
	
	return ans

# def takeInput() :

# 	n, tar = map(int, sys.stdin.readline().strip().split(" "))
# 	arr = list(map(int, sys.stdin.readline().strip().split(" ")))
# 	return n, tar, arr

# def printAns(ans):
# 	for i in ans:
# 		if i[0] < i[1]:
# 			print('{} {}'.format(i[0], i[1]))
# 		else:
# 			print('{} {}'.format(i[1], i[0]))

# Main.
# t = int(input().strip())
# t=1
# for i in range(t) :

    # n, target, arr = takeInput()

n=5
arr=[0,2,7,9,11]
target=9
ans = twoSum(arr, target, n)
print(ans)