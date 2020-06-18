//https://practice.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1
//Time complexity : O(n)

import java.util.*;
class Node
{
    int data;
    Node next;
    Node(int d) {data = d; next = null; }
}
		
class GfG
{
     /* Drier program to test above functions */
    public static void main(String args[])
    {
         Scanner sc = new Scanner(System.in);
		 int t=sc.nextInt();
		 
		 while(t-->0)
         {
            LList myList = new LList();
			int n = sc.nextInt();
            sc.nextLine();
            for(int i=0;i<n;i++)
            {
                int a1=sc.nextInt();
                int a2=sc.nextInt();
                if(a2==0)
                    myList.insertAtBeginning(a1);
                else
                    myList.insertAtEnd(a1);
            }
			myList.printList();
		}
	}
}

// } Driver Code Ends
/*class Node
    {
        int data;
        Node next;
        Node(int d) {data = d; next = null; }
    }*/
class LList
{
    Node head; // Please do not remove this
    
    // Should insert a node at the beginning
	void insertAtBeginning(int x)
	{
	    // Your code here  
	    Node tmp;
	    tmp = new Node(x);
	    tmp.next = head;
	    head = tmp;
	}
	
	// Should insert a node at the end
	void insertAtEnd(int x)
	{
	    // Your code here
	    Node curr;
	    if(head==null)
	    {
	        head = new Node(x);
	        return;
	    }
	    curr = head;
	    while(curr.next!=null)
	        curr = curr.next;
	    
	    curr.next = new Node(x);     
	}
	
	
	
	
	// Please do not delete this
	void printList()
    {
        Node temp = head;
        while (temp != null)
        {
           System.out.print(temp.data+" ");
           temp = temp.next;
        }  
        System.out.println();
    }
}