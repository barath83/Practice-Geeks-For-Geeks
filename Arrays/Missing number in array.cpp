//Time comp:O(n)
//https://practice.geeksforgeeks.org/problems/missing-number-in-array/0
//Find the sum of n elements by formula and subtract each value from array in the sum,final sum is the answer
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,total;
	    cin>>n;
	    int a[n];
	    total = n*(n+1)/2;
	    for(int i=0;i<n-1;i++)
	    {
	        cin>>a[i];
	        total-=a[i];
	    } 
	    cout<<total;
	    cout<<endl;
	}
	return 0;
}