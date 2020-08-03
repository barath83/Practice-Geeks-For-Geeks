//https://practice.geeksforgeeks.org/problems/c-matrix-rotation-by-180-degree/0
//Time complexity : O(n^2)

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
	        for(int j=0;j<n;j++)
	            scanf("%d",&a[i][j]);
	    for(int i=n-1;i>=0;i--)
	    {
	        for(int j=n-1;j>=0;j--)
	        {
	            printf("%d ",a[i][j]);
	        }
	        printf("\n");
	    }
	}
	return 0;
}