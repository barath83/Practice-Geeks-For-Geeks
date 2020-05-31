//Time Compexity:O(n)
//https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1

import java.util.*;

class Node
{
    int data;
    Node next;
    Node(int d)
    { 
        data = d; 
        next = null;
    }
}

public class FindMiddle
{
    Node head;  // head of list
  public void addToTheLast(Node node) {

  if (head == null) {
   head = node;
  } else {
   Node temp = head;
   while (temp.next != null)
    temp = temp.next;

   temp.next = node;
  }
 }
	  
    public static void main(String args[])
    {
         Scanner sc = new Scanner(System.in);
		 int t=sc.nextInt();
		 
		 while(t>0)
         {
			int n = sc.nextInt();
			FindMiddle llist = new FindMiddle();
			//int n=Integer.parseInt(br.readLine());
			int a1=sc.nextInt();
			Node head= new Node(a1);
            llist.addToTheLast(head);
            for (int i = 1; i < n; i++) 
			{
				int a = sc.nextInt(); 
				llist.addToTheLast(new Node(a));
			}
          
        GFG gfgobj = new GFG(); 
		//llist.head = new GFG().Middle(llist.head);
		System.out.println(gfgobj.getMiddle(llist.head));
        
		//llist.printList();
		
			t--;
		}
	}
}

// } Driver Code Ends
/* Node of a linked list
 class Node {
   int data;
    Node next;
    Node(int d)  { data = d;  next = null; }
}
 Linked List class
class LinkedList
{
    Node head;  // head of list
}
This is method only submission.  You only need to complete the method. */


class GFG
{
    // Function to find middle element a linked list
    int getMiddle(Node head)
   {
         // Your code here.
         Node curr = head;
         Node s = head;
         int c = 1;
         while(curr.next!=null)
         {
             curr = curr.next;
             c++;
         }
         c =c/2;
         while(c>0)
         {
             s = s.next;
             c--;
         }
         return s.data;
   }
}


//More Efficient method
//CPP
void printMiddle(struct Node *head)  
{  
    struct Node *slow_ptr = head;  
    struct Node *fast_ptr = head;  
  
    if (head!=NULL)  
    {  
        while (fast_ptr != NULL && fast_ptr->next != NULL)  
        {  
            fast_ptr = fast_ptr->next->next;  
            slow_ptr = slow_ptr->next;  
        }  
        printf("The middle element is [%d]\n\n", slow_ptr->data);  
    }  
}