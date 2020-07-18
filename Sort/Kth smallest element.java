//https://practice.geeksforgeeks.org/problems/kth-smallest-element5545-1587115620/1
//Time complexity : O(nlogn)

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
		    int n,k;
		    n = sc.nextInt();
		    int[] a = new int[n];
		    for(int i=0;i<n;i++)
		    {
		        a[i] = sc.nextInt();
		    }
		    k = sc.nextInt();
		    Arrays.sort(a);
		    System.out.println(a[k-1]);
		}
	}
}