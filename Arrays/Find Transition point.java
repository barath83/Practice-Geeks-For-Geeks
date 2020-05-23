//https://practice.geeksforgeeks.org/problems/find-transition-point-1587115620/1
//Time complexity : O(n)
//Normally traverse array when you find 1 break from loop and return the current index value to main


class Sorted_Array
{  
    public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		while(T>0)
		{
			int n =sc.nextInt();
			int arr[]=new int[n];
			for(int i=0;i<n;i++)
			{
				arr[i] = sc.nextInt();
			}
			GfG obj = new GfG();
			System.out.println(obj.transitionPoint(arr,n));
			T--;
		}	
	}
}// } Driver Code Ends
class GfG
{
	int transitionPoint(int arr[],int n)
	{
             // Your code here
             int i;
             for(i=0;i<n;i++)
             {
                 if(arr[i]==1)
                    break;
             }
             return i;
        } 
}


//Time complexity : O(n)
/*using binary search find a middle index and check if it is 1 and  its prev element not equals 1 
    if true return the index else 
    check if the value at that index is zero then we have to proceed by inc the index
    else we have to proceed by dec the index value*/
int transitionPoint(int arr[], int n) {
    int l=0,r=n-1;
    while(l<=r)
    {
        int it=(l+r)/2;
        if(arr[it]==1&&arr[it-1]!=1)
            return it;
        else{
            if(arr[it]==0)
                l=it+1;
            else
                r=it-1;
        }
            
    }
    return -1;
    // code here
}