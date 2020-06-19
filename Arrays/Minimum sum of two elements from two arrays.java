//https://practice.geeksforgeeks.org/problems/minimum-sum-of-two-elements-from-two-arrays/0
//Time complexity : O(n^2)

import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner (System.in);
		int t = sc.nextInt();
		
		while(t-->0)
		{
		    int n = sc.nextInt();
		    int[] a = new int[n];
		    int[] b = new int[n];
		    int te = 999;
		    int s =0;
		    
		    for(int i=0;i<n;i++)
		        a[i] = sc.nextInt();
		       
		    for(int i=0;i<n;i++)
		        b[i] = sc.nextInt(); 
		        
		    for(int i=0;i<n;i++)
		    {
		        for(int j=0;j<n;j++)
		        {
		            if(i!=j)
		            {
		                s = a[i]+b[j];
		                if(s<te)
		                {
		                    te=s;  
		                }
		                else
		                {
		                    s=s;
		                }
		                
		            }
		            
		        }
		    }
		    System.out.println(te);
		        
		}
	}
}