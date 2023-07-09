from os import *
from sys import *
from collections import *
from math import *

from sys import stdin, stdout, setrecursionlimit

setrecursionlimit(10 ** 7)

def minSubsetSumDifference(arr, n):
    a=0
    b=0
    for i in arr:
        if(a<b):
            a+=i
        else:
            b+=i
    return abs(a-b)

# Taking input using fast I/0.
def takeInput():
    N = int(stdin.readline())
    arr = list(map(int, stdin.readline().strip().split(" ")))
    return N, arr


tc = int(input())
while tc > 0:
    N, arr = takeInput()
    ans = minSubsetSumDifference(arr, N)
    stdout.write(str(ans) + "\n")
    tc -= 1
