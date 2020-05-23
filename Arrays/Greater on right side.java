//Time comp:O(n)
//Extra space of 'n' an array
//https://practice.geeksforgeeks.org/problems/greater-on-right-side/0

/*keep an iterating variable that goes till less than n
    copy the contents of main array to a temp array from outer-loop var+1 to n
    find the max by sorting the temp array for current itertation and print it 
    repeat till outer loop runs out and for n-1th element print -1 */


    import java.util.*;
    import java.lang.*;
    import java.io.*;
    import java.util.Arrays; 
    
    class GFG {
        public static void main (String[] args) {
            //code
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            
            while(t-->0)
            {
                int n = sc.nextInt();
                int[] a = new int[n];
                int[] temp = new int[n];
                int j = 0;
                int k ;
                
                for(int i=0;i<n;i++)
                {
                    a[i] = sc.nextInt();
                }
                
                while(j<n)
                {
                    for(int i=j+1;i<n;i++)
                    {
                        temp[i] = a[i];
                    }
                    
                    if(j == n-1)
                    {   
                        a[j] = -1;
                        System.out.print(a[j]);
                    }
                    else
                    {
                        Arrays.sort(temp);
                    
                        k = temp[temp.length-1];
                    
                        System.out.print(k+" ");
                    }
                    
                    j++;
                    
                    
                    
                }
                System.out.print("\n");
                
            }
        }
    }
    
    
//Time comp:O(n)    
//No extra space req
/* Traverse from right to left
   have two var as prev and maxi
   for each iteration prev becomes the curr ele
   and maxi value is stored in curr ele position
   and max of maxi and prev is calculated and array is printed after this */


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int maxi=-1;
        int prev;
        for(int i=n-1;i>=0;i--)
        {
            prev=a[i];
            a[i]=maxi;
            maxi=max(maxi,prev);
        }
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
	//code
	return 0;
}