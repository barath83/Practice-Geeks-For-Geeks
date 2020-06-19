//https://practice.geeksforgeeks.org/problems/find-unique-element/0
//Time complexity : O(n logn)

import java.lang.*;
import java.io.*;
import java.util.Arrays; 

class GFG {
	public static void main (String[] args) {
		//code
		
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		
		while(t-->0)
		{ 
		    int j = 0;
		    int n = sc.nextInt();
		    int k = sc.nextInt();
		    int[] a = new int[n];
		    
		    for(int i=0;i<n;i++)
		    {
		        a[i] = sc.nextInt();
		    }
		    
		    Arrays.sort(a);
		    
		   while(j<n)
		   {   
		       if(j == n-1)
		       {
		           System.out.print(a[n-1]);
		           break;
		       }
		       else if(a[j] == a[j+k-1])
		       {
		           j = j+k;
		       }
		       else
		       {
		           System.out.print(a[j]);
		           break;
		       }
		   }
		    
		    
		    System.out.print("\n");
		    
		}
		
		 
		  
		
	}
}