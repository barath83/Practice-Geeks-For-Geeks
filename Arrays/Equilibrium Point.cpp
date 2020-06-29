//https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1
//Time complexity : O(n)

#include <iostream>
using namespace std;

// Position this line where user code will be pasted.

int equilibriumPoint(long long a[], int n);

int main() {

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long a[n];

        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends

// Function to find equilibrium point
// a: input array
// n: size of array
int equilibriumPoint(long long a[], int n) {

    // Your code here
    long long x;
        long long p[n];
        for(int i=0;i<n;i++)
        {
            if(i==0)
                p[i]=a[i];
            else
                p[i]=p[i-1]+a[i];    
        }
        int f=0,ans=0;
        for(int i=1;i<n-1;i++){
            if(p[i-1]==p[n-1]-p[i])
            {
                f=1;
                ans = i+1;
                break;
            }
        }

        if(f==1)
            return ans;
        else if(n==1)
            return 1;
        else if(f!=1)
            return -1;
}