// C++ program to convert a left unbalanced BST to
// a balanced BST
#include <bits/stdc++.h>
using namespace std;
 
struct T
{
    int data;
    T* left,  *right;
};

/* This function traverse the skewed binary tree and
   stores its nodes pointers in vector nodes[] */
void storeBSTTree(T* root, vector<T*> &nodes)
{
    // Base case
    if (root==NULL)
        return;
 
    // Store nodes in Inorder (which is sorted
    // order for BST)
    storeBSTTree(root->left, nodes);
    nodes.push_back(root);
    storeBSTTree(root->right, nodes);
}
 
/* Recursive function to construct binary tree */
T* buildTreeUtil(vector<T*> &nodes, int start,
                   int end)
{
    // base case
    if (start > end)
        return NULL;
 
    /* Get the middle element and make it root */
    int mid = (start + end)/2;
    T *root = nodes[mid];
 
    /* Using index in Inorder traversal, construct
       left and right subtress */
    root->left  = buildTreeUtil(nodes, start, mid-1);
    root->right = buildTreeUtil(nodes, mid+1, end);
 
    return root;
}
 
// This functions converts an unbalanced BST to
// a balanced BST
T* buildTree(T* root)
{
    // Store nodes of given BST in sorted order
    vector<T *> nodes;
    storeBSTTree(root, nodes);
 
    // Constructs BST from nodes[]
    int n = nodes.size();
    return buildTreeUtil(nodes, 0, n-1);
}
 
// Utility function to create a new node
T* newNode(int data)
{
    T* node = new T;
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}
 
/* Function to do preorder traversal of tree */
void preOrder(T* node)
{
    if (node == NULL)
        return;
    printf("%d ", node->data);
    preOrder(node->left);
    preOrder(node->right);
}
 
// Driver program
int main()
{
    /* Constructed skewed binary tree is
                10
               /
              8
             /
            7
           /
          6
         /
        5   */
 
    T* root = newNode(10);
    root->left = newNode(8);
    root->left->left = newNode(7);
    root->left->left->left = newNode(6);
    root->left->left->left->left = newNode(5);
 
    root = buildTree(root);
 
    printf("Preorder traversal of balanced "
            "BST is : \n");
    preOrder(root);
 
    return 0;
}
