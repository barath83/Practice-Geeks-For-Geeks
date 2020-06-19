//https://practice.geeksforgeeks.org/problems/elements-in-the-range/0
//Time complexity : O(n)

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b;
	    cin>>n>>a>>b;
	    int arr[n];
	    int f = 1;
	    unordered_map<int,int> m;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        m[arr[i]] = 1;
	    }
	    
	    for(int j=a;j<=b;j++){
	        if(m[j]!=1){
	             f = 0;
	            break;
	        }
	    }
	    if(f==0)
	        cout<<"No"<<endl;
	    else
	        cout<<"Yes"<<endl;
	    
	}
	return 0;
}
