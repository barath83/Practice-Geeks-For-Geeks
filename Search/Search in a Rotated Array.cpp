//https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array/0


#include <bits/stdc++.h>
using namespace std;

int search(int a[],int n,int s)
{
    int lo=0;
    int hi=n-1;
    
    //iterate till low <= high 
    while(lo<=hi)
    {
        //calculate middle index for each iteration
        int mid = lo+(hi-lo)/2;
        
        if(a[mid]==s)
            return mid;

        //if current middle element is less than current high element     
        if(a[mid]<a[hi])
        {
            //the elements are in increasing order
            //if s is greater than mid element and lesser than the high element then low must be middle plus 1
            //as the element must definitely be in that range 
            if(s>a[mid]&&s<=a[hi])
            {
                lo=mid+1;
            }
            //else high must be middle minus 1 
            //as element doesn't lie above the middle element high index has to be changed 
            else
            {
                hi=mid-1; 
            }
        }
        //if the range is not in decreasing order 
        else
        {
            //if s is lesser than middle element and greater than the low element then high must be middle minus 1
            //as the element must be in this region
            if(s<a[mid]&&s>=a[lo])
            {
                hi=mid-1;
            }
            //else low must be middle plus 1
            else
            {
                lo=mid+1;    
            }
        }
    }
    
    return -1;
}

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
	    
	    int s;
	    cin>>s;
	        
	    int ans = search(a,n,s);
	    cout<<ans<<endl;
	}
}