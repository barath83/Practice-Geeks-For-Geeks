//https://practice.geeksforgeeks.org/problems/amount-of-water/0

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
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int water = 0;
	    int lo = 0,hi=n-1,lm=0,rm=0;
	    
	    while(lo<=hi)
	    {
	        if(a[lo]<a[hi]){
	            if(a[lo]>lm)
	                lm = a[lo];
	            else
	                water+= lm-a[lo];
	            
	            lo++;     
	        }
	        else{
	            if(a[hi]>rm)
	                rm = a[hi];
	            else
	                water+= rm-a[hi];
	            
	            hi--;     
	        }
	    }
	    
	    cout<<water<<endl;
	}
	return 0;
}