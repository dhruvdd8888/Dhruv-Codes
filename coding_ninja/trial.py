from math import sqrt
def circ(r,ith):
	if(ith==r/2):
		return
	stars=int(2*(sqrt(abs(((r-ith)**2)-(r**2)))))
	space=int(((2*r)-stars)/2)
	pstars=""
	pspace=""
	for i in range(stars):
		pstars+="_"
	for j in range(space):
		pspace+=" "
	print(pspace,pstars)
	circ(r,ith+1)
	print(pspace,pstars)

circ(30,0)

# answers=[]
# def counter(thief,police,update):
# 	days=0
# 	while((thief!=police) and ((thief+1)!=police)):
# 		thief=(thief+update)% 13
# 		police=(police+2)%13
# 		days+=1
# 	answers.append(days)

# for thief in range (13):
# 	for police in range (13):
# 		counter(thief,police,0)
# 		counter(thief,police,1)
# 		counter(thief,police,-1)

# answers.sort()
# print(answers[-1])
