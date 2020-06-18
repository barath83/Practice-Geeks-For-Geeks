//https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1
//Time complexity :  O(log n)


import java.util.*;

class BinarySearch
{
	 
	 public static void main(String args[])
	 {
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		while(T>0)
		{
			int n = sc.nextInt();
			int arr[] = new int[n];
			for(int i=0;i<n;i++)
			{
				arr[i]=sc.nextInt();
			}
			 
			int key =sc.nextInt();
			GfG g = new GfG();
			System.out.println(g.bin_search(arr,0,n-1,key));
		T--;
		}
	}
}

// } Driver Code Ends
class GfG
{
	int bin_search(int A[], int left, int right,  int k)
	{
		// Your code here
		if(right>=left)
		{
		    int m = left+(right-left)/2;
		    
		    if(A[m]==k)
		    {
		        return m;
		    }
		    
		    if(A[m]>k)
		    {
		        return bin_search(A,left,m-1,k);
		    }
		    
		    if(A[m]<k)
		    {
		        return bin_search(A,m+1,right,k);
		    }
		}
		return -1;
	}
}

