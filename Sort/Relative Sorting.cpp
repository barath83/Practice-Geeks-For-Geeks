//https://practice.geeksforgeeks.org/problems/relative-sorting4323/1


//Initial template for C++

#include <bits/stdc++.h> 
using namespace std;



void sortA1ByA2(int a1[], int n, int a2[], int m);

// Driver program to test above function 
int main(int argc, char *argv[]) 
{ 
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    
	    int a1[n];
	    int a2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> a2[i];
	    }
	    
	    sortA1ByA2(a1, n, a2, m); 
	
	   
	    for (int i = 0; i < n; i++) 
		    cout<<a1[i]<<" ";
		
	    cout << endl;
	    
	    
	}
	return 0; 
} 
// } Driver Code Ends


//User function template in C++

// A1[] : the input array-1
// N : size of the array A1[]
// A2[] : the input array-2
// M : size of the array A2[]



void sortA1ByA2(int A1[], int N, int A2[], int M) 
{
    //Your code here
    map<int,int>mp;
    vector<int> v;
    
    for(int i=0;i<N;i++)
    {
        mp[A1[i]]++;
    }
    int f=0;
    for(int j=0;j<M;j++)
    {
        if(mp.find(A2[j])==mp.end()){
            //not found
            
        }
        else{
            //found
            int freq = mp[A2[j]];
            while(freq--){
                A1[f]=A2[j];
                f++;
            }
            mp.erase(A2[j]);
        }
    }
    
    for(auto i:mp){
        int r = i.second;
        while(r--){
            v.push_back(i.first);
        }
        
    }
    
    sort(v.begin(),v.end());
    
    if(f>0){
        int n = v.size();
        int i=0;
        while(n--){
            A1[f] = v[i];
            i++;
            f++;
        }
    }else{
        for(int i=0;i<v.size();i++)
        {
            A1[i] = v[i];
        }
    }
    
} 