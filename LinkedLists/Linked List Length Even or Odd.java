//Time complexity : O(n)
//https://practice.geeksforgeeks.org/problems/linked-list-length-even-or-odd/1

import java.util.*;
    class Node
    {
        int data;
        Node next;
        Node(int d) {data = d; next = null; }
    }
		
public class GFG2
{
    Node head;  
	
	/* Function to print linked list */
    void printList(Node head)
    {
        Node temp = head;
        while (temp != null)
        {
           System.out.print(temp.data+" ");
           temp = temp.next;
        }  
        System.out.println();
    }
	
 
    /* Inserts a new Node at front of the list. */
    public void addToTheLast(Node node) 
	{

		if (head == null) 
		{
			head = node;
		} else 
		{
		   Node temp = head;
		   while (temp.next != null)
		   temp = temp.next;
		   temp.next = node;
		}
    }
	  
     /* Drier program to test above functions */
    public static void main(String args[])
    {
       
         
        /* Constructed Linked List is 1->2->3->4->5->6->
           7->8->8->9->null */
         Scanner sc = new Scanner(System.in);
		 int t=sc.nextInt();
		 
		 while(t-->0)
         {
			int n = sc.nextInt();
            GFG2 llist1 = new GFG2(); 
			int a1=sc.nextInt();
			Node head= new Node(a1);
            llist1.addToTheLast(head);
            for (int i = 1; i < n; i++) 
			{
				int a = sc.nextInt(); 
				llist1.addToTheLast(new Node(a));
			}
		    llist1.head= head;
		    GFG obj=new GFG();
			int start=obj.isLengthEvenorOdd(llist1.head);
		    if(start==0)
		    System.out.println("Even");
		    else
		    System.out.println("Odd");
		}
	}
}// } Driver Code Ends
/*
class Node
    {
        int data;
        Node next;
        Node(int d) {data = d; next = null; }
    }
*/
/* isLengthEvenorOdd method should return 1 if the length of LL is even 
   otherwise return 0.*/
class GFG
{
	int isLengthEvenorOdd(Node head1)
	{
	    
	    //Add your code here.
	    int c=1;
	    Node curr = head1;
	    while(curr.next!=null)
	    {
	       c++;
	       curr = curr.next;
	    }
	        if(c%2==0)
	            return 0;
	        else 
	            return 1;
	}
}

//More efficient in cpp

int LinkedListLength(Node* head)  
{  
    while (head && head->next)  
    {  
        head = head->next->next;  
    }  
    if (head==NULL)  
        return 0;
    else      
        return 1;  
}