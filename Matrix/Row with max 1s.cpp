//https://practice.geeksforgeeks.org/problems/row-with-max-1s/0
//Time complexity : O(m*n)

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,m;
	    scanf("%d %d",&n,&m);
	    int a[n][m];
	    int c=0,max=0,ans=0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            scanf("%d",&a[i][j]);
	            if(a[i][j]==1)
	                c++;
	        }
	        if(c>max)
	        {
	            max=c;
	            ans=i;
	        }
	        c=0;
	    }
	    printf("%d",ans);
	    printf("\n");
	}
	return 0;
}