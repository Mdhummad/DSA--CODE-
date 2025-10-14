// TSRIVER DSA SHEET 2023

// Problem: Construct Binary Tree

// #include <iostream>
// using namespace std;

// struct Node
// {
//     int data;
//     struct Node *left;
//     struct Node *right;
//     Node(int val)
//     {
//         data = val;
//         left = right = NULL;
//     }
// };

// int main()
// {
//     struct Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->right = new Node(4);
// }

//==============================================================================================================================

// Traversal of Binary Tree
// depth first search

// preorder traversal
//  #include <iostream>
//  using namespace std;
//  struct Node {
//      int data;
//      Node* left;
//      Node* right;

//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };
// void preorder(Node* root) {
//     if (root == NULL) return; // Base case
//     cout << root->data << " "; // Visit the root
//     preorder(root->left); // Traverse left subtree
//     preorder(root->right); // Traverse right subtree
// }

// postorder traversal
//  void postorder(Node* root) {
//      if (root == NULL) return; // Base case
//      postorder(root->left); // Traverse left subtree
//      postorder(root->right); // Traverse right subtree
//      cout << root->data << " "; // Visit the root
//  }

// inorder traversal
//  void inorder(Node* root){
//      if(root == NULL) return;
//      inorder(root->left);
//  cout<<root->data<<" ";
//      inorder(root->right);
//     
//  }