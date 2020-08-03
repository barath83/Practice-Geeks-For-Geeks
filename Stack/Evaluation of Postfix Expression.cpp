//https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression/0

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	    string ex;
	    cin>>ex;
	    stack<int> s;
	    
	    for(int i=0;i<ex.length();i++)
	    {
	        if(isdigit(ex[i]))
	            s.push((ex[i]-'0'));
	        else
	        {
	            int v1,v2;
	            v2 = s.top();
	            s.pop();
	            v1 = s.top();
	            s.pop();
	            switch(ex[i])
	            {
	                case '+':
	                    s.push(v1+v2);
	                    break;
	                case '-':
	                    s.push(v1-v2);
	                    break;
	                case '*':
	                    s.push(v1*v2);
	                    break;
	                case '/':
	                    s.push(v1/v2);
	                    break;
	            }
	        }
	    }
	    cout<<s.top()<<endl;
	}
	return 0;
}