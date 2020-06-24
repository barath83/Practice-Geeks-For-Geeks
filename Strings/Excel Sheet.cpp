//https://practice.geeksforgeeks.org/problems/excel-sheet5448/1
//Time complexity : O(n)

//Initial template for C++


#include<bits/stdc++.h>
using namespace std;
string ExcelColumn(int n);


 // } Driver Code Ends


//User function template for C++

string ExcelColumn(int n)
{
    // Your code goes here
    string str ="";
    while(n>0)
    {
        if(n%26==0)
            str ='Z'+str;
        else
            str = char((n%26)+64)+str;
        
        n--;
        n=n/26;
    }
    
    return str;
}

// { Driver Code Starts.


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<ExcelColumn(n)<<endl;
    }
    return 0;
}
      // } Driver Code Ends