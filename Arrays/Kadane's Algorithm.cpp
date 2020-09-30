//https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0


#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    int cur_sum=a[0];
	    int sum = a[0];
	    for(int i=1;i<n;i++)
	    {
	        cur_sum = max(a[i],cur_sum+a[i]);
	        sum = max(cur_sum,sum);
	    }
	    cout<<sum<<endl;
	}
	return 0;
}