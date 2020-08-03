#https://practice.geeksforgeeks.org/problems/array-subset-of-another-array/0

t = int(input())
for _ in range(t):
    inputs= input().split()
    n1 = int(inputs[0])
    n2 = int(inputs[1])
    ar1 = set(map(int,input().split()))
    ar2 = set(map(int,input().split()))
    if ar2.issubset(ar1):
        print("Yes")
    else:
        print("No")
