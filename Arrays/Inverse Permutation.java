//https://practice.geeksforgeeks.org/problems/inverse-permutation/0
//Time complexity : O(n)

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
		    int k;
		    n = sc.nextInt();
		    int[] a = new int[n];
		    int[] b = new int[n];
		    
		    for(int i=0;i<n;i++)
		    {
		        a[i] = sc.nextInt();
		    }
		    
		    for(int i=0;i<n;i++)
		    {
		        k = a[i];
		        b[k-1] = i+1;
		    }
		    
		    for(int i=0;i<n;i++)
		    {
		        System.out.print(b[i]+" ");
		    }
		    
		    System.out.print("\n");
		}
	}
}