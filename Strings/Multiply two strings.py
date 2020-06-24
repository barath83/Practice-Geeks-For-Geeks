#https://practice.geeksforgeeks.org/problems/multiply-two-strings/1


def multiply(a,b):
    # code here
    # return the product string
    return (str(int(a)*int(b)))



#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    t=int(input())
    for i in range(t):
        a,b=input().split()
        print(multiply(a,b))
