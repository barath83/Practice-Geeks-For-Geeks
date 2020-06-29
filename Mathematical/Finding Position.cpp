//https://practice.geeksforgeeks.org/problems/finding-position/0
//Time Complexity : O(N)

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int ans = 1 ;

    for(int i=1; ; i++)
    {
        int val = pow(2,i) ;

        if(val <= n)
            ans = val ;
        else
            break ;
    }
    cout<<ans<<endl;
    }
	return 0;
}