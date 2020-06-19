//https://practice.geeksforgeeks.org/problems/print-matrix-in-snake-pattern/0
//Time complexity : O(n^2)

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
	        }
	    }
	    int i,j=0;
	    int f=0;
	    
	    for(i=0;i<n;i++)
	    {
	        switch(f)
	        {
	            case 0:
	                while(j<n)
	                {
	                    printf("%d ",a[i][j]);
	                    j++;
	                }
	                break;
	            
	            case 1:
	                while(j>=0)
	                {
	                   printf("%d ",a[i][j]);
	                   j--; 
	                }
	        }
	        if(f==1)
	            {
	                f=0;
	                j=0;
	            }
	        else if(f==0)
	            {
	                f=1;
	                j=n-1;
	            }
	    }
	    printf("\n");
	}
	return 0;
}