//https://practice.geeksforgeeks.org/problems/find-the-fine/0
//Time Comp:O(n)
/*Get the date 
 if it's even find sum of odd num car's respective penalty
 else find the other sum*/

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int no,date;
	    cin>>no>>date;
	    int car[no],pena[no];
	    for(int i=0;i<no;i++)
	        cin>>car[i];
        for(int i=0;i<no;i++)
            cin>>pena[i];
        if(date%2==0){
            int sum_even_date=0;
            for(int i=0;i<no;i++)
            {
                if(car[i]%2!=0)
                {
                    sum_even_date+=pena[i];
                }
            }
            cout<<sum_even_date<<endl;
        }else{
            int sum_odd_date=0;
            for(int i=0;i<no;i++)
            {
                if(car[i]%2==0)
                {
                    sum_odd_date+=pena[i];
                }
            }
            cout<<sum_odd_date<<endl;
        }
	    
	}
	return 0;
}

//Further improved can be 
/*Do not iterate through every element find even or odd
 if its even start from 1 and add plus 2 for every iteration
 if its odd start from 0  and add plus 2 for every iteration */