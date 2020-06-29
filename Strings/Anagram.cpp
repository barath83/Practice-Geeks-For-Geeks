//https://practice.geeksforgeeks.org/problems/anagram/0
//Time complexity : O()


#include<set>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{ 
	   string s1,s2;
	   set<char> r1,r2;
	   cin>>s1;
	   cin>>s2;
	   if(s1.length()!=s2.length())
	   {
	       cout<<"NO";
	   }
	   else
	   {
	       for(int i=0;i<s1.length();i++)
	       {
	           r1.insert(s1[i]);
	           r2.insert(s2[i]);
	       }
	       if(r1.size()==r2.size())
	        cout<<"YES";
	       else
	        cout<<"NO";
	   }
	  cout<<endl;
	}
	return 0;
}