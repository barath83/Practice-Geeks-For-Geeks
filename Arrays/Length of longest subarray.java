//Time complexity - O(n)
//Space complexity - O(n)
/*Traversing the array till its non-negative incrementing count,
 when negative occurs make count as 0
 for each iteration check if it has the max value */

//https://practice.geeksforgeeks.org/problems/length-of-longest-subarray/0


import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		int t;
		Scanner sc = new Scanner(System.in);
		t = sc.nextInt();
		while(t-->0)
		{
		    int n;
		    n = sc.nextInt();
		    int[] a= new int[n];
		   
		    for(int i=0;i<n;i++)
		    {
		        a[i] = sc.nextInt();
		    }
		    
		    int c=0;
		    int k =0;
		    
		    for(int i=0;i<n;i++)
		    {
		        if(a[i]>0)
		        {
		            c=c+1;
		             
		        }
		        else
		        {   
		            c=0;
		        }
		        
		        if(c>k)
		            k = c;
		       
		    }
		    
		    System.out.println(k);
		    
		}
	}
}