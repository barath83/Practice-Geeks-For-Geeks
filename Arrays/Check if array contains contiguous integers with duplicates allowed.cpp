//https://practice.geeksforgeeks.org/problems/check-if-array-contains-contiguous-integers-with-duplicates-allowed/0



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
	    int f=0;
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    sort(a,a+n);
	    
	    for(int i=0;i<n-1;i++)
	    {
	        if(a[i+1]-a[i]==1 || a[i+1]-a[i]==0){
	            f=0;
	            continue;
	        }
	        else{
	            f=1;
	            break;
	        }
	    }
	    
	    if(f==0)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	    
	}
	return 0;
}