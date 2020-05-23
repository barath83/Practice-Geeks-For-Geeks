//https://practice.geeksforgeeks.org/problems/sort-the-array/0
//Time comp:O(n)
#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    int n,temp;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) 
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" "; 
    
    cout<<endl;
}
return 0; 
}