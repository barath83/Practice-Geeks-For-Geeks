//Time complexity : O(n)
//Space complexity: O(1)
/* take first element as temp and another loop variable as k
    traverse the array from 1 to n
    while traversing if current temp not equals current array element
    put curr ele in current k index position 
    and put curr k index position in temp and increment k till ineqaulity exists*
    finally return k as it is size for unique ele array*/

#include<bits/stdc++.h>
using namespace std;

/*You are required to complete this function */

int remove_duplicate(int [],int );

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }

    int n = remove_duplicate(a,sizeof(a)/sizeof(a[0]));

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends
/*You are required to complete this function */
int remove_duplicate(int A[],int N)
{
//Your code here
    int temp = A[0];
    int k = 1;
    for(int i = 1; i < N ; i++)
    {
        if(temp != A[i])
        {
            A[k] = A[i];
            temp = A[k];
            k++;
        }
    }
    return k;
    
}