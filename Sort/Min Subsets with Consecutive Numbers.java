//https://practice.geeksforgeeks.org/problems/min-subsets-with-consecutive-numbers/0\



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
		    int n,c=0,flag=0;
		    n = sc.nextInt();
		    int[] a = new int[n];
		    for(int i=0;i<n;i++)
		    {
		        a[i] = sc.nextInt();
		    }
		    Arrays.sort(a);
		    for(int i=0;i<n-1;i++)
		    {
		        if(a[i]+1!=a[i+1])
		        {
		            c++;
		        }
		    }
		    System.out.println(c+1);
		}
	}
}