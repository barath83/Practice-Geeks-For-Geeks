//Time Complexity - O(n)
//Space Complexity - O(n)
//Just accepting the array values and summing up the left array part and right array part seperately and then multiplying it for final answer.
//https://practice.geeksforgeeks.org/problems/multiply-left-and-right-array-sum/0

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		
		while(t-->0)
		{
		   int n = sc.nextInt();
		   int[] p1 = new int[n];
		   int s1=0,s2 =0;
		   
		   for(int i=0;i<n/2;i++)
		   {
		      p1[i] = sc.nextInt();
		      s1 = s1+p1[i];
		   }
		   
		   for(int j=n/2;j<n;j++)
		   {
		       p1[j] = sc.nextInt();
		       s2 = s2 +p1[j];
		   }
		    
		    System.out.print(s1*s2);
		    System.out.print("\n");
		}
	}
}