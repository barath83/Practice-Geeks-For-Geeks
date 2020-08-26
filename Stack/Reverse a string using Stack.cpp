//https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1


#include<bits/stdc++.h>
using namespace std;
void reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        reverse(str,len);
        cout<<str;
        cout<<endl;
    }
        return 0;
}
// } Driver Code Ends
void reverse(char *str, int len)
{
// Your code goes here
   stack <char> s;
   int k =0;
   for(int i=0;i<len;i++)
   {
       s.push(str[i]);
   }
   while(!s.empty())
   {
       char l = s.top();
       str[k++] = l;
       s.pop();
   }
}