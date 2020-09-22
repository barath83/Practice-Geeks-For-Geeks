//https://practice.geeksforgeeks.org/problems/count-the-reversals/0


#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    //accpeting string
	    string s;
	    cin>>s;
	    
	    //check if the length is odd
	    if(s.size()%2==1){
	        cout<<-1<<endl;
	    }
	    //else proceed
	    else{
    	    //counters
    	    int c=0,b=0;
    	    for(int i=0;i<s.size();i++)
    	    {
    	        //increment c when it is {
    	        if(s[i]=='{')
    	            c++;
    	        //decrement for }         
    	        if(s[i]=='}')
    	            c--;
    	        //if c becomes less than 0 there should be balancing 
    	        //increment b and make c as 1 to account for the current bracket too
    	        if(c<0){
    	            c=1;
    	            b++;
    	        }     
    	    }
    	    //for cases where there can be only even no of {
    	    // as c will never be 0 we have to divide the count of c by 2 for answer
	        b=b+c/2;
	        cout<<b<<endl;
	    }
	    
	    
	}
	return 0;
}