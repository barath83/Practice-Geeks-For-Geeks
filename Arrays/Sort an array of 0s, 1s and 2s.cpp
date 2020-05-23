//Time comp:O(n)
//https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0

//Self explantory

#include <stdio.h>

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	        if(a[i]==0)
	            printf("%d ",a[i]);
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==1)
	            printf("%d ",a[i]);
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==2)
	            printf("%d ",a[i]);
	    }
	    printf("\n");
	}
	return 0;
}