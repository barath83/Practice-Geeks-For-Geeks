
//Time comp:O(n)
//No extra space
/*Loop and get all ele of array
check if the ele is not zer o inc a c and print that ele 
after subtract zero count from n and print the rq no of zeroes*/

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
		    int n,k,c=0;
		    n = sc.nextInt();
		    for(int i=0;i<n;i++)
		    {
		       k = sc.nextInt();
		       if(k!=0)
		       {
		           c=c+1;
		           System.out.print(k+" ");
		       }
		    }
		    int l = n-c;
		    for(int i=0;i<l;i++)
		    {
		        System.out.print(0+" ");
		    }
		    System.out.print("\n");
		}
	}
}