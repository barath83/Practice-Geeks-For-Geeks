//https://practice.geeksforgeeks.org/problems/print-pattern/0

#include <iostream>
using namespace std;

void seq(int n)
{
    if(n>0){
        cout<<n<<" ";
        seq(n-5);
    }
    if(n<=0)
    {
        cout<<n<<" ";
    }
    else{
        cout<<n<<" ";
    }
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    seq(n);
	    cout<<endl;
	}
	return 0;
}

