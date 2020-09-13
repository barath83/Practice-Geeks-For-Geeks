//https://practice.geeksforgeeks.org/problems/nuts-and-bolts-problem0431/1


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
	    char nuts[n];
	    char bolts[n];
	    for(int i=0;i<n;i++)
	        cin>>nuts[i];
	    for(int i=0;i<n;i++)
	        cin>>bolts[i];
	    
	    unordered_map<char,int> hash;
	    
	    //arranging hash with nut sizes and its positions
	    for(int i=0;i<n;i++){
	        hash[nuts[i]] = i;
	    }
	    
	    //search for bolts in hashmap of nuts if found replace nuts by bolts
	    for(int i=0;i<n;i++)
	    {
	        if(hash.find(bolts[i])!=hash.end())
	            nuts[i] = bolts[i];
	    }
	    
	    sort(nuts,nuts+n);
	    sort(bolts,bolts+n);
	    
	    for(int i=0;i<n;i++)
	        cout<<nuts[i]<<" ";
	    cout<<endl;
	    for(int i=0;i<n;i++)
	        cout<<bolts[i]<<" ";
	    cout<<endl;
	        
	}
	return 0;
}