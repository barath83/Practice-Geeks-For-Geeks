//https://practice.geeksforgeeks.org/problems/longest-common-substring/0
//Time complexity : O(m*n)'

using namespace std;

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y;
	    scanf("%d %d",&x,&y);
	    string str1,str2;
	    cin>>str1>>str2;
	    int dp[x+1][y+1];
	    int max=0;
	    
	    for(int i=0;i<=x;i++)
	    {
	      for(int j=0;j<=y;j++)
	      {
	          if(i==0||j==0)
	            dp[i][j]=0;
	          else if(str1[i-1]==str2[j-1])
	          {
	              dp[i][j] = dp[i-1][j-1]+1;
	              if(dp[i][j]>max)
	                max = dp[i][j];
	          }
	          else
	          {
	              dp[i][j] = 0;
	          }
	      }
	    }
	    printf("%d",max);
	    printf("\n");
	    
	}
	return 0;
}
