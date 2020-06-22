//https://practice.geeksforgeeks.org/problems/print-bracket-number/0
//Time complexity : O(n)

#include <iostream>
#include <stack>
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
	    int c=0,flag=0;
	    stack<int> s;
	    for(int i=0;i<ex.length();i++)
	    {
	        if(ex[i]=='(')
	        {
	            c++;
	            cout<<c<<" ";
	            s.push(c);
	        }
	        else if(ex[i]==')')
	        {
	            cout<<s.top()<<" ";
	            s.pop();
	        }
	        else
	            flag=1;
	    }
	    printf("\n");
	}
	return 0;
}