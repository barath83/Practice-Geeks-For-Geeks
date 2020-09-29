//https://practice.geeksforgeeks.org/problems/number-of-paths/0


#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int r,c;
	    cin>>r>>c;
	    int dp[r][c];
	    
	    for(int i=0;i<r;i++)
            dp[i][0]=1;
        for(int i=0;i<c;i++)
            dp[0][i]=1;
        
        for(int i=1;i<r;i++)
        {
            for(int j=1;j<c;j++)
            {
                dp[i][j] = dp[i-1][j]+dp[i][j-1];
            }
        }
        cout<<dp[r-1][c-1]<<endl;
	}
	return 0;
}