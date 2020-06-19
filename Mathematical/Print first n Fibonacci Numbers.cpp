//https://practice.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers/0
//Time Complexity : O(n)

using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long long int a[n];
	    a[0] = 1;
	    a[1] = 1;
	    for(long long int i=2;i<n;i++)
	    {
	        a[i] = a[i-1]+a[i-2];
	    }
	    for(long long int i=0;i<n;i++)
	        cout<<a[i]<<" "; 
	  
	  cout<<"\n";      
	        
	}
	return 0;
}