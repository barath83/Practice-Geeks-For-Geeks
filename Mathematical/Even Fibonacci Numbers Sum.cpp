//https://practice.geeksforgeeks.org/problems/even-fibonacci-numbers-sum/0
//Time complexity : O(n)

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long long int a[n];
	    a[0]=1; a[1]=1;
	    int s=0;
	    for(long long int i=2;i<n;i++){
	        a[i] = a[i-1]+a[i-2];
	        if(a[i]%2==0&&a[i]<=n)
	            s=s+a[i];
	        if(a[i]>n)
	            break;
	    }
	    cout<<s<<endl;
	    
	}
	return 0;
}