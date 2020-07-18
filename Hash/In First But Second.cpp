//https://practice.geeksforgeeks.org/problems/in-first-but-second/0
//Time complexity : O(n)

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//cod
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,m;
	    cin>>n>>m;
	    long long int a[n],b[m];
	    unordered_map<long long int,long long int> k;
	    
	    for(long long int i=0;i<n;i++)
	        cin>>a[i];
	   
	    for(long long i=0;i<m;i++){
	        cin>>b[i];
	        k[b[i]]++;
	    }
	    
	    for(long long int i=0;i<n;i++)
	    {
	        if(k[a[i]]==0)
	        {
	            cout<<a[i]<<" ";
	        }
	    }
	    
	    cout<<endl; 
	         
	}
	return 0;
}