
//https://practice.geeksforgeeks.org/problems/equal-sum0810/1


using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],lsum[n],rsum[n];
	    int f=0; 
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    lsum[0] = a[0];
	    for(int i=1;i<n;i++)
	    {
	        lsum[i] = lsum[i-1]+a[i];
	    }
	    
	    rsum[n-1] = a[n-1];
	    for(int i=n-2;i>=0;i--)
	    {
	        rsum[i] = rsum[i+1]+a[i];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        if(lsum[i]==rsum[i]){
	            f=1;
	        }
	    }
	    
	    if(f==1){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
	
}