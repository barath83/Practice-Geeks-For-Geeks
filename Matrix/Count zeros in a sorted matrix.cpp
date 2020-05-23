//Time complexity : O(n^2)
//Space complexity : No extra space
//Simple straight forward approach travserse and count zeroes and print
//https://practice.geeksforgeeks.org/problems/count-zeros-in-a-sorted-matrix/1

#include <iostream>
using namespace std;
#define MAX 1000

int countZeroes(int A[MAX][MAX],int N);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{ 
		int n;
		cin>>n;
		int A[MAX][MAX];
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		cin>>A[i][j];
		cout<<countZeroes(A,n)<<endl;
	}
	return 0;
}// } Driver Code Ends
/*you are required to complete this method*/
int countZeroes(int A[MAX][MAX],int N)
{
    //Your code here
    int c = 0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(A[i][j]==0)
                c++;
        }
    }
    return c;
}


//Time complexity : O(n)
//https://www.geeksforgeeks.org/count-zeros-in-a-row-wise-and-column-wise-sorted-matrix/
int countZeroes(int mat[N][N]) 
{ 
    // start from bottom-left corner of the matrix 
    int row = N - 1, col = 0; 
  
    // stores number of zeroes in the matrix 
    int count = 0; 
  
    while (col < N) 
    { 
        // move up until you find a 0 
        while (mat[row][col]) 
  
            // if zero is not found in current column, 
            // we are done 
            if (--row < 0) 
                return count; 
  
        // add 0s present in current column to result 
        count += (row + 1); 
  
        // move right to next column 
        col++; 
    } 
  
    return count; 
} 