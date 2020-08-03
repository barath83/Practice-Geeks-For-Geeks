//https://practice.geeksforgeeks.org/problems/shop-in-candy-store/0
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
	    int minCost = 0;
	    int maxCost=0;
	    int nmax = n;
	    for(int i=0;i<n;i++){
	         minCost+=price[i];
	         n = n-k;
	    }
	       
	    int pos = 0;
	    for(int i=nmax-1;i>=pos;i--){
	        maxCost+=price[i];
	        pos = pos+k;
	    }
	        
	    
	    cout<<minCost<<" "<<maxCost<<endl;    
	}
	return 0;
}
