//practice.geeksforgeeks.org/problems/key-pair5616/1


#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum,flag=0;
	    cin>>n>>sum;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    unordered_set<int> s;
	    for(int i=0;i<n;i++)
	    {
	        int x = sum-a[i];
	        
	        if(s.find(x)!=s.end())
	        {
	            flag = 1;
	            cout<<"Yes"<<endl;
	            break;
	        }
	        s.insert(a[i]);
	    }
	    if(flag==0)
	        cout<<"No"<<endl;
	}
	return 0;
}