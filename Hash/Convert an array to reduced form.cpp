//https://www.geeksforgeeks.org/convert-an-array-to-reduced-form-set-1-simple-and-hashing/
//practice.geeksforgeeks.org/problems/convert-an-array-to-reduced-form/0
//Time complexity : O(nlogn) for sorting O(n) for iteration


// C++ program to convert an array in reduced 
// form 
#include <bits/stdc++.h> 
using namespace std; 
  
void convert(int arr[], int n) 
{ 
    // Create a temp array and copy contents 
    // of arr[] to temp 
    int temp[n]; 
    memcpy(temp, arr, n*sizeof(int)); 
  
    // Sort temp array 
    sort(temp, temp + n); 
  
    // Create a hash table. Refer  
    // http://tinyurl.com/zp5wgef  
    unordered_map<int, int> umap; 
  
    // One by one insert elements of sorted 
    // temp[] and assign them values from 0 
    // to n-1 
    int val = 0; 
    for (int i = 0; i < n; i++) 
        umap[temp[i]] = val++; 
  
    // Convert array by taking positions from 
    // umap 
    for (int i = 0; i < n; i++) 
        arr[i] = umap[arr[i]]; 
} 
  
void printArr(int arr[], int n) 
{ 
    for (int i=0; i<n; i++) 
        cout << arr[i] << " "; 
} 
  
// Driver program to test above method 
int main() 
{ 
    int arr[] = {10, 20, 15, 12, 11, 50}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
  
    cout << "Given Array is \n"; 
    printArr(arr, n); 
  
    convert(arr , n); 
  
    cout << "\n\nConverted Array is \n"; 
    printArr(arr, n); 
  
    return 0; 
} 