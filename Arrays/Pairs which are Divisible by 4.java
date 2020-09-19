//https://practice.geeksforgeeks.org/problems/pairs-which-are-divisible-by-4/0


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
		    int[] a = new int[n];
		    int c=0;
		    int s;
		    for(int i=0;i<n;i++)
		    {
		        a[i] = sc.nextInt();
		    }
		    
		    for(int i=0;i<n;i++)
		    {
		        for(int j=i+1;j<n;j++)
		        {
		            s = a[i]+a[j];
		            if(s%4==0)
		                c = c+1;
		        }
		    }
		    
		    System.out.println(c);
		    
		}
	}
}