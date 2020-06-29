//https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1
//Time complexity : O(n^2)


// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;


bool subArrayExists(int arr[], int n);
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    	if (subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}// } Driver Code Ends


//Complete this function
bool subArrayExists(int arr[], int n)
{
    //Your code here
    int sum=0;
    unordered_set<int> sum_val;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==0||sum_val.find(sum)!=sum_val.end())
            return true;
        
        sum_val.insert(sum);    
    }
    return false;
}


