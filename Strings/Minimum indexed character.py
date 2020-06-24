#https://practice.geeksforgeeks.org/problems/minimum-indexed-character0221/1
#Time complexity : O(mn)
#m and n are length of two strings


def printMinIndexChar(string,patt):
    #return required char
    ans = 9999999
    req = ''
    for i in range(0,len(patt)):
        res = string.find(patt[i])
        if(res<ans and res!=-1):
            ans = res
            req = patt[i]    
    if(req!=''):
        return req
    else:
        return "$"


#{ 
#  Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
if __name__ == '__main__':
    t=int(input())
    
    for tcs in range(t):
        string=input()
        patt=input()
        
        print(printMinIndexChar(string,patt))
        
# } Driver Code Ends



#cpp hashing
#Time complexity - O(m+n)
void printMinIndexChar(string str, string patt) 
{ 
    // unordered_map 'um' implemented as hash table 
    unordered_map<char, int> um; 
  
    // to store the index of character having 
    // minimum index 
    int minIndex = INT_MAX; 
  
    // lengths of the two strings 
    int m = str.size(); 
    int n = patt.size();- 
  
    // store the first index of each character of 'str' 
    for (int i = 0; i < m; i++) 
        if (um.find(str[i]) == um.end()) 
            um[str[i]] = i; 
  
    // traverse the string 'patt' 
    for (int i = 0; i < n; i++) 
  
        // if patt[i] is found in 'um', check if  
        // it has the minimum index or not accordingly  
        // update 'minIndex' 
        if (um.find(patt[i]) != um.end() &&  
            um[patt[i]] < minIndex) 
            minIndex = um[patt[i]]; 
  
    // print the minimum index character 
    if (minIndex != INT_MAX) 
        cout << "Minimum Index Character = "
             << str[minIndex]; 
  
    // if no character of 'patt' is present in 'str' 
    else
        cout << "No character present"; 
} 