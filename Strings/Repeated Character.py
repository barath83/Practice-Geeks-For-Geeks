#https://practice.geeksforgeeks.org/problems/repeated-character/0
#Time complexity : O(n^2)

#code
t = int(input())
for _ in range(t):
    s = input()
    f=0
    for i in s:
        if s.count(i)>1:
            print(i)
            f=1
            break
    if(f==0):
        print(-1)