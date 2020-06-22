//https://practice.geeksforgeeks.org/problems/damon-prime/0
//Time complexity : O(n)

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int k;
	    scanf("%d",&k);
	    int n1 = k-1;
	    int n2 = k+1;
	    int f1=0,f2=0;
	    for (int i = 2; i < n1; i++) 
        {
            if(n1%i==0)
                f1=1;
        }
        for (int i = 2; i < n2; i++) 
        {
            if(n2%i==0)
                f2=1;
        }
        if(f1==0&&f2==0&&k!=1&&k!=2)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
            
	}
	return 0;
}