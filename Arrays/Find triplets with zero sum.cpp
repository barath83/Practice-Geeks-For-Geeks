//https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1/

#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
bool findTriplets(int arr[], int n);
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
        if(findTriplets(arr, n))
        cout<<"1"<<endl;
        else 
        cout<<"0"<<endl;
	}
    return 0;
}// } Driver Code Ends


/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
bool findTriplets(int arr[], int n)
{ 
    //Your code here
    
    //sort the array first.
    sort(arr,arr+n);
    
    int hi,lo;
    
    //since it's a triplet there has to be three elements 
    //Run loop till n-2 so that for every i there can be two more elements 
    for(int i=0;i<n-2;i++)
    {
        //Use two pointers low and high
        lo=i+1;
        hi=n-1;
        
        //for each element iterate while lo<hi
        while(lo<hi)
        {
            //if zero sum is found return true
            if(arr[i]+arr[lo]+arr[hi]==0){
                return true;
            }
            // if the sum is greater than 0 should decrement the high pointer
            else if(arr[i]+arr[lo]+arr[hi]>0){
                hi--;
            }
            // if the sum is lesser than 0 should increment the low pointer 
            else{
                lo++;
            }
        }
    }
    return false;
}