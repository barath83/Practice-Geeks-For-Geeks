//https://practice.geeksforgeeks.org/problems/convert-an-array-to-reduced-form/0
//Time complexity : O(nlogn) for sorting O(n^2) in iteration


import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		int t ;
		Scanner sc = new Scanner(System.in);
		t = sc.nextInt();
		while(t-->0)
		{
		    int n;
		    n = sc.nextInt();
		    int[] a = new int[n];
		    int[] b = new int[n];
		    for(int i=0;i<n;i++)
		    {
		        a[i] = sc.nextInt();
		        b[i] = a[i];
		    }
		    Arrays.sort(b);
		    for(int i=0;i<n;i++)
		    {
		        for(int j=0;j<n;j++)
		        {
		            if(a[i]==b[j])
		            {
		                System.out.print(j+" ");
		                break;
		            }
		        }
		    }
		    System.out.print("\n");
 		}
	}
}