//https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string/0
//Time complexity : O(n)

#include <bits/stdc++.h>
#include<stack>
#include<string>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string str,temp;
	    int r=1;
	    stack <string> s;
	    cin>>str;
	    string tx="";
	    for(int i=0;i<str.length();i++)
	    {
	        if(str[i]!='.'){
	            tx+=str[i];
	        }
	        else{
	            s.push(tx);
	            s.push(".");
	            tx="";
	        }
	    }
	    s.push(tx);
	    while(!s.empty())
	    {    
	        cout<<s.top();
	        s.pop();
	    }
	    
	  cout<<"\n"; 
	}
}