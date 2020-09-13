//https://practice.geeksforgeeks.org/problems/k-largest-elements4206/1


#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,k;
	    scanf("%d %d",&n,&k);
	    vector<int> v;
	    for(int i=0;i<n;i++){
	        int x;
	        scanf("%d",&x);
	        v.push_back(x);
	    }
	    sort(v.begin(),v.end());
	    for(int i=1;i<=k;i++)
	        cout<<v[n-i]<<" ";
	  
	  printf("\n");      
	    
	}
	return 0;
}