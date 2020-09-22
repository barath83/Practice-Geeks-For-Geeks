//https://practice.geeksforgeeks.org/problems/parenthesis-checker/0

#include <iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;


bool checkit(string ex)
{
     stack<char> s;
	    char x;
	    
	    for(int i=0;i<ex.length();i++)
	    {
	        if(ex[i]=='('||ex[i]=='['||ex[i]=='{')
	        {
	            s.push(ex[i]);
	            continue;
	        }
	        
	        if(s.empty())
	            return false;
	       
	        switch(ex[i])
	        {
	            case ')':
	                x = s.top();
	                s.pop();
	                if(x=='{'|| x=='[')
	                    return false;
	                break;     
	                   
	            
	            case ']':
	                x = s.top();
	                s.pop();
	                if(x=='('|| x=='{')
	                    return false;
	                break;     
	                   
	             case '}':
	                x = s.top();
	                s.pop();
	                if(x=='('|| x=='[')
	                    return false;   
	                break;     
	        }
	    }
	    
	    return (s.empty());
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string ex;
	    cin>>ex;
	    cin.ignore();
	    
	    if(checkit(ex))
	        cout<<"balanced";
	    else 
	        cout<<"not balanced";
	    
	    cout<<endl;
	}
	return 0;
}