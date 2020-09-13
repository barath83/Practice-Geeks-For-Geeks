//https://practice.geeksforgeeks.org/problems/minimum-energy/0




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
		    int n,flag=0;
		    int tm,v=0,s=0;
		    n = sc.nextInt();
		    int[] a = new int[n];
		    for(int i=0;i<n;i++)
		    {
		        a[i] = sc.nextInt();
		    }
		    
		        if(a[0]<=0)
		            {
		                tm = Math.abs(a[0]);
		                v = tm+1;
		                s = v;
		            }
		                
		                for(int i=0;i<n;i++)
		                {
		                    s = s+a[i];
		                    if(s<=0)
		                        {
		                            tm = Math.abs(s);
		                            v = v+tm+1;
		                            s = s+tm+1;
		                        }
		                }
		                
		          if(v==0)
		            System.out.println(1);
		          else
		            System.out.println(v);
		}
	}
}