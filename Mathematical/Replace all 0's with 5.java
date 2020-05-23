//https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1
//Time Comp : 0(n)
/*Iterate the number digit by digit if it is not equal to zero identify the place of the number and add it existing sum by
  multiplying the number by the number in its appropriate one's or ten's place or so values 
  if it is 0 then multiply 5 to the appropriate one's or ten's place or so  values
  place value is identified by the i variable */


import java.util.Scanner;
import java.lang.Math;


class Convert_To_Five
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		while(T>0)
		{
			int N = sc.nextInt();
			System.out.println(new GfG().convertfive(N));
			T--;
		}
		
	}
}// } Driver Code Ends
class GfG
{
    int convertfive(int num)
    {
	// Your code here
	
	int v;
	double s=0,i=0;
    double r;
    double t = 10;
	
	while(num>0)
	{
	   r = num%10;
	   num= num/10;
	   
	   if(r!=0)
	   {
	      s = s+(r*Math.pow(t,i)); 
	   }
	   
	   if(r==0)
	   {
	        s = s+(5*Math.pow(t,i));
	   }
	   
	   i = i+1;
	}
	
	v = (int)s;
	return v;
	
    }
}