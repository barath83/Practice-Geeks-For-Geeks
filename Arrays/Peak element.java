//Time Complexity - O(n)
//Space Complexity - O(n)
//https://practice.geeksforgeeks.org/problems/peak-element/1
/*Just checking for the boundary cases first and returning the index if the prove true
    else traverse the array till n elements and break when a element satisfies peak element condition 
    and return the index*/

/*Can be bettered by using binary search as it's time complexity is O(logn)    */



import java.util.*;
class PeakElement{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
			int n=sc.nextInt();
			int[] a=new int[n];
			for(int i=0;i<n;i++)
				a[i]=sc.nextInt();
		
			int A=new Peak().peakElement(a,n);
			int f=0;
			if(n==1)
			f=1;
			else
			if(A==0 && a[0]>=a[1])
			f=1;
			else if(A==n-1 && a[n-1]>=a[n-2])
			f=1;
			else if(a[A] >=a[A+1] && a[A]>= a[A-1])
			f=1;
			else
			f=0;
			System.out.println(f);
		}
	}
}// } Driver Code Ends
/*Complete the function below*/

class Peak
{
	// Function to find the peak element
	// a[]: input array
	// n: size of array a[]
	public int peakElement(int[] a,int n)
    {
       //add code here.
       int r=0 ;
       if(n>1)
       {
           if(a[0]>a[1])
            {
                r = 0;
            }
            else if(a[n-1]>a[n-2])
            {
                r = n-1;
            }
            else
            {
                for(int i=1;i<n-1;i++)
                {
                    if(a[i]>a[i-1]&&a[i]>a[i+1])
                    {
                        r = i;
                        break;
                    }
                }
            }
       }
       
       return r;
    }
}



//Time Complexity : 0(logn)
//Using binary search method

int peakElement(int a[], int n)
{
    if(a[0]>a[1])
        return 0;
    else if(a[n-1]>=a[n-2])
        return (n-1);
    int l=0,r=n-1;
    while(l<=r)
    {
        int x=(l+r)/2;
        if((a[x]>=a[x+1])&&(a[x]>=a[x-1]))
            return x;
        else if(a[x]<=a[x+1])
            l=x+1;
        else if(a[x]<=a[x-1])
            r=x-1;
    }
    return -1;
   // Your code here
}