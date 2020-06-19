#https://practice.geeksforgeeks.org/problems/first-element-to-occur-k-times/0
#Time complexity : O(n^2)

t = int(input())
for _ in range(t):
    inputs = input().split()
    n = int(inputs[0])
    k = int(inputs[1])
    a = list(map(int,input().split()))
    count = {}
    for i in range(0, n): 
        if(a[i] in count.keys()): 
            count[a[i]] += 1
        else: 
            count[a[i]] = 1
    f=0  
    for i in range(0, n):  
        if (count[a[i]] == k): 
            print(a[i])
            f=1
            break
    if(f==0):
        print(-1)