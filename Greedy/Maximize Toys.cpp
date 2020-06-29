//https://practice.geeksforgeeks.org/problems/maximize-toys/0
//Time complexity : O(nlogn)


#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int price[n];
	    for(int i=0;i<n;i++)
	        cin>>price[i];
	    sort(price,price+n);
	    
	    int cost=0,count=0; 
	    for(int i=0;i<n;i++)
	    {
	        cost+=price[i];
	        count+=1;
	        if(cost>=k)
	            break;
	    }
	    cout<<count-1<<endl;
	}
	return 0;
}