//https://practice.geeksforgeeks.org/problems/symmetric-tree/1


#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}
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
bool isSymmetric(struct Node* root);

int main()
{
    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string s;
		getline(cin,s);
		Node* root = buildTree(s);
        if(isSymmetric(root))
            cout<<"True"<<endl;
        else 
            cout<<"False"<<endl;
  }
  return 0;
}
// } Driver Code Ends
/*
Structure of the node of the tree is as
struct Node
{
	int data;
	struct Node* left, *right;
};
*/
// complete this function
// return true/false if the is Symmetric or not
bool isSymmetric(struct Node* root)
{
	// Code here
    //border conditions 
    //1.if no root it is symmetric
    //2.if only root exists it is not
	if(root==NULL)
	    return true;
	if(root->left==NULL||root->right==NULL)
	    return false;

    //Push left and right of root into q    
	queue<Node*>q;
	q.push(root->left);
	q.push(root->right);
	while(!q.empty())
	{
        //Always pop the first two elements out of q and take two temp nodes
	    Node *t1 = q.front();
	    q.pop();
	    Node *t2 = q.front();
	    q.pop();
	    
        //if their data are not equal return false
	    if(t1->data!=t2->data)
	        return false;
        //Main property of symmetry is one's left child must be equal to two's right child     
        //so push left of temp1 node and push right of temp2 node
	    if(t1->left&&t2->right){
	        q.push(t1->left);
	        q.push(t2->right);
	    }
        //incase if the nodes to pushed symmetrically doesn't exist return false
	    else if((!t1->left&&t2->right)||(t1->left&&!t2->right))
	        return false;
        //now alternatively push one's right child and two's left child    
	    if(t1->right&&t2->left){
	        q.push(t1->right);
	        q.push(t2->left);
	    }
        //incase if the nodes to pushed symmetrically doesn't exist return false
	    else if((!t1->right&&t2->left)||(t1->right&&!t2->left))
	        return false;
	}
	return true;
}