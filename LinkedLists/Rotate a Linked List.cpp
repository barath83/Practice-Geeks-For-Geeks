//Time complexity : O(n)
//https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node *rotate(struct Node *head, int k);

Node *insert() {
    int n, i, value;
    struct Node *temp, *head = NULL;
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> value;
        if (i == 0) {
            head = new Node(value);
            temp = head;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
    return head;
}

void printList(Node *node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
int main(void) {

    int t, k;

    scanf("%d", &t);
    while (t--) {
        Node *head = insert(); // insert function to build linked list
        scanf("%d", &k);
        head = rotate(head, k); // rotate linked list anti-clockwise  by k nodes
        printList(head);        // print linked list after rotation
    }
    return (0);
}
// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

/*  This function should rotate list counter-clockwise
    by k and return new head (if changed) */
Node* rotate(Node* head, int k) {
    // Your code here
    Node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next=head;
    Node *tail;
    while(k--)
    {
        tail = head;
        head = head->next;
    }
    tail->next=NULL;
    return head;
}
