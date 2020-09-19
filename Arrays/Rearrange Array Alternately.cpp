//https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately/0


using namespace std;

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k=0;
	    scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++)
	        scanf("%d",&a[i]);
	    
	    for(int i=0,j=n-1;(i<n/2 || j>=n/2);i++,j--)
	    {
	         k++;
	         cout<<a[j]<<" ";
	        if(k!=n/2+1)
	        {
	            cout<<a[i]<<" ";
	        }
	    }
	    
	  printf("\n");
	}
	return 0;
}