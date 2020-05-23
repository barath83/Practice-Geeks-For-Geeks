//Time comp:O(n^2)
//Self explanatory
//https://practice.geeksforgeeks.org/problems/maximum-no-of-1s-row/0

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
	    int a[r][c];
	    int ci=0,ans=0,max=0;
	    for(int i=0;i<r;i++)
	    {
	        for(int j=0;j<c;j++)
	        {
	            cin>>a[i][j];
	            if(a[i][j]==1)
	                ci++;
	        }
	        if(ci>max)
	        {
	            max=ci;
	            ans=i;
	        }
	        ci=0;
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}

//https://www.geeksforgeeks.org/find-the-row-with-maximum-number-1s/
//Better time comp using binary earch
//O(mlogn)
/*A simple method is to do a row wise traversal of the matrix, count the number of 1s in each row and compare the count with max. 
Finally, return the index of row with maximum 1s. The time complexity of this method is O(m*n) where m is number of rows and n is number of columns in matrix.
We can do better. Since each row is sorted, we can use Binary Search to count of 1s in each row. 
We find the index of first instance of 1 in each row. The count of 1s will be equal to total number of columns minus the index of first 1.*/

#include <bits/stdc++.h> 
using namespace std; 
#define R 4  
#define C 4  
  
// Function to find the index of first index  
// of 1 in a boolean array arr[]  
int first(bool arr[], int low, int high)  
{  
    if(high >= low)  
    {  
        // Get the middle index  
        int mid = low + (high - low)/2;  
      
        // Check if the element at middle index is first 1  
        if ( ( mid == 0 || arr[mid-1] == 0) && arr[mid] == 1)  
            return mid;  
      
        // If the element is 0, recur for right side  
        else if (arr[mid] == 0)  
            return first(arr, (mid + 1), high);  
          
        // If element is not first 1, recur for left side  
        else
            return first(arr, low, (mid -1));  
    }  
    return -1;  
}  
  
// Function that returns index of row  
// with maximum number of 1s.  
int rowWithMax1s(bool mat[R][C])  
{  
    // Initialize max values  
    int max_row_index = 0, max = -1;  
  
    // Traverse for each row and count number of 1s  
    // by finding the index of first 1  
    int i, index;  
    for (i = 0; i < R; i++)  
    {  
        index = first (mat[i], 0, C-1);  
        if (index != -1 && C-index > max)  
        {  
            max = C - index;  
            max_row_index = i;  
        }  
    }  
  
    return max_row_index;  
}  
  
// Driver Code  
int main()  
{  
    bool mat[R][C] = { {0, 0, 0, 1},  
                    {0, 1, 1, 1},  
                    {1, 1, 1, 1},  
                    {0, 0, 0, 0}};  
  
    cout << "Index of row with maximum 1s is " << rowWithMax1s(mat);  
  
    return 0;  
}  

//O(m+n)
#include <bits/stdc++.h> 
using namespace std; 
  
// The main function that returns index 
// of row with maximum number of 1s.  
int rowWithMax1s(bool mat[R][C])  
{  
    int i, index;  
  
    // Initialize max using values from first row.  
    int max_row_index = 0;  
    int max = first(mat[0], 0, C - 1);  
  
    // Traverse for each row and count number of 1s  
    // by finding the index of first 1  
    for (i = 1; i < R; i++)  
    {  
        // Count 1s in this row only if this row  
        // has more 1s than max so far  
  
        // Count 1s in this row only if this row  
        // has more 1s than max so far  
        if (max != -1 && mat[i][C - max - 1] == 1)  
        {  
            // Note the optimization here also  
            index = first (mat[i], 0, C - max);  
  
            if (index != -1 && C - index > max)  
            {  
                max = C - index;  
                max_row_index = i;  
            }  
        }  
        else 
        {  
            max = first(mat[i], 0, C - 1);  
        }  
    }  
    return max_row_index;  
}  