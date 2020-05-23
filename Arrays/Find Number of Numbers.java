//https://practice.geeksforgeeks.org/problems/find-number-of-numbers/1
//Time Comp : 0(n*k - max digit's length)
/*Get each num in array and loop through each digit of the element and check if its equal to k
 if so inc count 
 keep while as >=10
 even after failing the loop the last digit value will be stored in d
 and it will be checked at the end of loop*/


class Numbers{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
            int n=sc.nextInt();
            int[] a=new int[n];
            for(int i = 0; i < n; i++)
            {
                a[i]=sc.nextInt();
            }
            int k=sc.nextInt();
            GfG g=new GfG();
            System.out.println(g.num(a,n,k));
        }
    }
    }/*This is a function problem.You only need to complete the function given below*/
    /*Complete the Function below*/
    class GfG
    {
              public static int num(int a[], int n, int k)
                {    
                     int count = 0;
                     
                     //Your code here
                     for(int i=0;i<n;i++)
                     {
                         int d = a[i];
                         while(d>=10)
                         {
                             int m = d%10;
                             if(m==k)
                             {
                                 count++;
                             }
                             d=d/10;
                         }
                         if(d == k)
                         {
                             count++;
                         }
                     }
                     return count;
                     
                }
    }