//https://practice.geeksforgeeks.org/problems/string-manipulation/0/

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
	    //declare a vector v of n size
	    vector<string> v;
	    //declare a string and get the first string of sequence of strings
	    string t;
	    cin>>t;
	    //push it inside vector
	    v.push_back(t);
	    
	    //iterate over the remaining strings
	    for(int i=1;i<n;i++)
	    {
	        //use t as temp var to store current string
	        cin>>t;
	        //compare it with last string in vector
	        if(t==v[v.size()-1]){
	            //if found remove the last string in array
	             v.erase(v.begin()+v.size()-1);
	        }else{
	            //else push the new string inside again
	            v.push_back(t);
	        }
	    }
	    cout<<v.size()<<endl;
	}
	return 0;
}