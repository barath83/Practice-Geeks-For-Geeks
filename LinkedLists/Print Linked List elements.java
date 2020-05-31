//Time comp : O(n)
//https://practice.geeksforgeeks.org/problems/print-linked-list-elements/1

import java.util.*;

class Node {

    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}



public class linkedlist {

    Node head;
    public void addToTheLast(Node node) {

        if (head == null) {
            head = node;
        } else {
            Node temp = head;
            while (temp.next != null) {
                temp = temp.next;
            }

            temp.next = node;
        }
    }
 public static void main(String args[]) {

        int value;
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            int n = sc.nextInt();
            linkedlist llist = new linkedlist();
            int a1 = sc.nextInt();
            Node head = new Node(a1);
            llist.addToTheLast(head);
                    
            for (int i = 1; i < n; i++) {
                int a = sc.nextInt();
                llist.addToTheLast(new Node(a));
            }	
            GfG pl=new GfG();
            pl.printList(llist.head);
        System.out.println();
            t--;
        }
    }
}// } Driver Code Ends
/* Node is defined as
class Node {
    int data;
    Node next;
    Node(int d) {
        data = d;
        next = null;
    }
}*/

class GfG
{
    // Print elements of a linked list on console
    // head pointer input could be NULL as well
    // for empty list
    void printList(Node head)
    {
        //add code here.
        while(head!=null)
        {
            System.out.print(head.data+" ");
            head=head.next;
        }
}
}
