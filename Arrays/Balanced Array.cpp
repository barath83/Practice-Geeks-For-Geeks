//Time complexity - O(n)
//Space complexity - O(n)
//compute left array sum and right array sum and find the absolute difference of it
//https://practice.geeksforgeeks.org/problems/balanced-array/0

#include <iostream>
#include <vector>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int sl=0,sr=0;
	    for(int i=0;i<n/2;i++){
	        int x;
	        cin>>x;
	        sl+=x;
	    }
	    for(int i=n/2;i<n;i++){
	        int y;
	        cin>>y;
	        sr+=y;
	    }
	    
	    int ans = abs(sl-sr);
	    cout<<ans;
	    
	    cout<<endl;
	}
	return 0;
}