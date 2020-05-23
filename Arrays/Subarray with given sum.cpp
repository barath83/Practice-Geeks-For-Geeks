//Time complexity : O(n^2)
//Straight forward approach with traversing the sub array for summ using for inside for 
//https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0

using namespace std;

int main() {
	//
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,s,ts,flag=0;
	    scanf("%d %d",&n,&s);
	    int a[n];
	    for(int i=0;i<n;i++)
	        scanf("%d",&a[i]);
	        
	    for(int i=0;i<n-1;i++)
	    {
	        if(a[i]==s)
	        {
	            printf("%d %d",i+1,i+1);
	            flag =1;
	            break;
	        }
	        else
	        {
	          ts = a[i];  
	        }
	        for(int j=i+1;j<n;j++)
	        {
	            ts = ts+a[j];
	            if(ts>s)
	                break;
	            if(ts==s)
	            {
	                printf("%d %d",i+1,j+1);
	                flag=1;
	                break;
	            }
	        }
	        if(flag==1)
	            break;
	    }
	    if(flag==0)
	    {
	        if(a[n-1]==s)
	        {
	            printf("%d %d",n,n);
	        }
	        else
	        {
	            printf("%d",-1);
	        }
	    }
	   
	   printf("\n");    
	}
	return 0;
}

//Time comp : O(n)
//https://www.geeksforgeeks.org/find-subarray-with-given-sum/
/*Take a[0] as current_sum
    Traverse a[1] to a[n-1]
        add to current_sum until it it is greater than sum
        when current_sum is greater than sum 
        inc start and subtract the value from left index 
        repeat the above two steps till we have curr_sum==sum
        then print the current start and i-1 value as it is starting and ending index */


int subArraySum(int arr[], int n, int sum) 
{ 
    /* Initialize curr_sum as value of  
    first element and starting point as 0 */
    int curr_sum = arr[0], start = 0, i; 
  
    /* Add elements one by one to curr_sum and  
    if the curr_sum exceeds the sum, 
    then remove starting element */
    for (i = 1; i <= n; i++) 
    { 
        // If curr_sum exceeds the sum, 
        // then remove the starting elements 
        while (curr_sum > sum && start < i - 1) 
        { 
            curr_sum = curr_sum - arr[start]; 
            start++; 
        } 
  
        // If curr_sum becomes equal to sum, 
        // then return true 
        if (curr_sum == sum) 
        {  
            cout << "Sum found between indexes " 
                 << start << " and " << i - 1; 
            return 1; 
        } 
  
        // Add this element to curr_sum 
        if (i < n) 
        curr_sum = curr_sum + arr[i]; 
    } 
  
    // If we reach here, then no subarray 
    cout << "No subarray found"; 
    return 0; 
} 