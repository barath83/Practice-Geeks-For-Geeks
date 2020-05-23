//Time comp : O(n^2logn)
//Using vector and sort 
//https://practice.geeksforgeeks.org/problems/sorted-matrix/0

#include<iostream>
using namespace std;

#include<vector>
#include<algorithm>

int main() {
int t;
cin>>t;
while(t--)
{
    int n,x;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n*n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i:v)
    cout<<i<<" "; 
    cout<<endl;
}
}

