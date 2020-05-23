//Time complexity - O(n)
//Space complexity - O(n)
//https://practice.geeksforgeeks.org/problems/play-with-an-array/1
//func problem: checking if the odd postion is lesser than even postion while traversing through odd positions if less then swap else do nothing

class FormatingArray{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
			int n=sc.nextInt();
			int[] a=new int[n];
			for(int i=0;i<n;i++)
				a[i]=sc.nextInt();
			GfG g=new GfG();
			int[] b=g.formatArray(a,n);
			int flag=1;
			if(b.length==a.length){
				for(int i=1;i<n;i+=2)
					if(b[i]<b[i-1])
						flag=0;
				if(flag==0)
					System.out.println("0");
				else{
					Arrays.sort(a);
					Arrays.sort(b);
					for(int i=0;i<n;i++){
						if(a[i]!=b[i])
							flag=0;
					}
					System.out.println(flag);
				}
			}
			else
				System.out.println("0");
		}
	}
}
/*This is a function problem.You only need to complete the function given below*/
class GfG
{
	public int[] formatArray(int[] a,int n)
        {
        // add code here.
        for(int i=1;i<n;i=i+2)
        {   int temp=0;
            if(a[i]<a[i-1])
            {
                temp = a[i-1];
                a[i-1] = a[i];
                a[i] = temp;
            }
            else
            {
                temp = 0;
            }
        }
        
        return a;
	}
}