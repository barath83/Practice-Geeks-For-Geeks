//https://practice.geeksforgeeks.org/problems/sort-a-stack/1
//Time complexity : O(nlogn)
//Extra space required


class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}// } Driver Code Ends

/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
   //Your code here
   vector<int> v;
   
   while(!s.empty())
   {
       int x = s.top();
       v.push_back(x);
       s.pop();
   }
   std::sort(v.begin(),v.end());
   
   for(int i=0;i<v.size();i++){
       s.push(v[i]);
   }
}