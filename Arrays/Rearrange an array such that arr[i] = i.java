//https://practice.geeksforgeeks.org/problems/rearrange-an-array-such-that-arri-i/0
//Time complexity : O(n)

import java.lang.*;
import java.io.*;
import java.util.Arrays; 

class GFG {
	public static void main (String[] args) {
		//code
		int t;
		Scanner sc = new Scanner(System.in);
		t = sc.nextInt();
		while(t-->0)
		{
		    int n,flag=0;
		    n = sc.nextInt();
		    int[] a = new int[n];
		   
		    for(int i=0;i<n;i++)
		    {
		        a[i] = sc.nextInt();
		    }
		    
		    for(int i=0;i<n;i++)
		    {    flag =0 ;
		        for(int j=0;j<n;j++)
		        {
		            if(i==a[j])
		            {
		                flag=1;
		                break;
		            }
		        }
		        
		        if(flag==1)
		            System.out.print(i+" ");
		        else
		            System.out.print("-1 ");
		    }
		    System.out.print("\n");
		}
	
	}
}