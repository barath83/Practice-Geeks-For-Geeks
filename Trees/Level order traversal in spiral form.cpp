//https://practice.geeksforgeeks.org/problems/level-order-traversal-in-spiral-form/1


#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

void printSpiral(Node *root);

// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


int main() {
    int t;
    string  tc;
    getline(cin,tc);
    t=stoi(tc);
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);

        printSpiral(root);
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

void printSpiral(Node *root)
{
    //Your code here
    
    if(root==NULL)
        return;
    //Have two stacks and push root into first stack
    stack<Node*>s1;
    stack<Node*>s2;
    s1.push(root);
    
    //traverse until anyone of the stacks is empty
    while(!s1.empty() || !s2.empty())
    {
        // while stack1 has elements print the topmost element from stack1
        //push elements into stack2 in the order right child followed by left child of current node
        while(!s1.empty())
        {
            Node *temp = s1.top();
            s1.pop();
            cout<<temp->data<<" ";
            
            if(temp->right)
                s2.push(temp->right);
            if(temp->left)
                s2.push(temp->left);
        }
        
        // while stack2 has elements print the topmost element from stack2
        //push elements into stack1 in the order left child followed by right child of current node
        while(!s2.empty())
        {
            Node *temp = s2.top();
            s2.pop();
            cout<<temp->data<<" ";
            
            if(temp->left)
                s1.push(temp->left);
            if(temp->right)
                s1.push(temp->right);
        }
    }
}
