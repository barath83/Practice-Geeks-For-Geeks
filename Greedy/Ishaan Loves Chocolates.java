//https://practice.geeksforgeeks.org/problems/ishaan-loves-chocolates/0





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
		    int[] a = new int[n];
		    
		    for(int i=0;i<n;i++)
		    {
		        a[i] = sc.nextInt();
		    }
		    Arrays.sort(a);
		    System.out.print(a[0]);
		    System.out.print("\n");
		}
	}
}