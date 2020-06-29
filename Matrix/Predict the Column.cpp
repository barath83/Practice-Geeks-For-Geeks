//https://practice.geeksforgeeks.org/problems/predict-the-column/1
//Time complexity : O(n^2)

//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

int M[100][100];

// Function prototype
int columnWithMaxZeros(int);


 // } Driver Code Ends
//User function Template for C++

/*Function to count zeros in each column
* N : Number of rows and columns in array
M is the matrix that is globally declared
*/
int columnWithMaxZeros(int N){
    
    // Your code here

    int c = 0;
    int max = INT_MIN;
    int i,j;
    int index;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            int x = M[j][i];
            if(x==0){
                c++;
            }
        }
        if(c>max){
            max = c;
            index = i;
        }
        c=0;
    }
    return index;
    
}

// { Driver Code Starts.

// Driver code to test columnWithMaxZeros function
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    // Taking elements input into the matrix
	    for(int i = 0;i<N;i++){
	        for(int j = 0;j<N;j++){
	            cin >> M[i][j];
	        }
	    }
	    
	    cout << columnWithMaxZeros(N) << endl;
	}
	
	return 0;
}  // } Driver Code Ends