//Time comp:O(n^2)
/*Traverse with two for loops and print elements if i==0 or i==n-1
    else if j==0 or j==n-1 */

//https://practice.geeksforgeeks.org/problems/boundary-elements-of-matrix/0

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n][n];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            scanf("%d",&a[i][j]);
	            if(i==0||i==n-1)
	                printf("%d ",a[i][j]);
	            else if(j==0 || j==n-1)
	                printf("%d ",a[i][j]);
	        }
	    }
	    printf("\n");
	}
	return 0;
}
