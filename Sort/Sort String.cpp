//https://practice.geeksforgeeks.org/problems/sort-string/0
//Time complexity : O(n logn)

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    sort(s.begin(),s.end());
	    cout<<s<<endl;
	}
	
	return 0;
}