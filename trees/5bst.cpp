#include <iostream>
using namespace std;

class BST {
public:
    struct Node {
        int data;
        Node* left;
        Node* right;
        Node(int val) : data(val), left(nullptr), right(nullptr) {}
    };

    Node* root = nullptr;
// recursive 
    Node* insertNode(Node* node, int val) {
        if (!node) return new Node(val) ;//if (!node) means if the tree is empty or we have reached a leaf node if (node == nullptr)  // In C++


        if (val < node->data)
            node->left = insertNode(node->left, val);
        else if (val > node->data)
            node->right = insertNode(node->right, val);
        return node;
    }

/*
Iterative insertion in tree
TreeNode* insertIntoBST(TreeNode* root, int val) {
    if(root == NULL) return new TreeNode(val);
    TreeNode* cur = root;
    while(true) {
        if(cur->val < val) {
            if(cur->right != NULL) cur = cur->right;
            else {
                cur->right = new TreeNode(val);
                break;
            }
        } else {
            if(cur->left != NULL) cur = cur->left;
            else {
                cur->left = new TreeNode(val);
                break;
            }
        }
    }
    return root;
}

*/



    void inorderTraversal(Node* node) {
        if (!node) return;
        inorderTraversal(node->left);
        cout << node->data << " ";
        inorderTraversal(node->right);
    }

  
    Node* search(Node* root,int key) {
        Node* curr = root;
        while (curr) {
            if (curr->data == key)
                return curr;
            else if (key < curr->data)
                curr = curr->left;
            else
                curr = curr->right;
        }
        return nullptr;
    }


 /*
 MIN AND MAX
 */   
Node* findMin() {
        if (!root) return nullptr;
        Node* curr = root;
        while (curr->left)
            curr = curr->left;
        return curr;
    }


    Node* findMax() { 
        if (!root) return nullptr;
        Node* curr = root;
        while (curr->right)
            curr = curr->right;
        return curr;
    }


    node* findMax(node* root) {
    if (root == nullptr) return nullptr;
    node* curr = root;
    while (curr) {
        if (curr->right == nullptr) {
            return curr;
        } else {
            curr = curr->right;
        }
    }
    return nullptr;
}










/*
CIEL OF A BST
->it is the  first elemnet which is greater than the given element
*/

 int ceil(tree<int> * root , int key){
    int ceil =-1;
    while(root){
        if(root->data==key){
            ceil=root.data;
            return ceil;
        }
        else if(root.data>key){
            root = root->left;
            
        }
        else{
            ceil = root->data;
            root = root->right;
        }
return ceil;
    }
 }
};


 
/*
FLOOR IN BST
==>geratest value that is equal to or smaller to the key*/ 
int floor(tree<int> * root , int key){
    int floor =-1;
    while(root){
        if(root->data==key){
            floor=root.data;
            return floor;
        }
        else if(root.data<key){
            floor = root->data;
            root = root->right;
            
        }
        else{
            root = root->left;
        }

 
    }

}


// INSERTING INTO A BST
TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL) return new TreeNode(val);
        else if(root->val > val){
        if(root->left==NULL){
            root->left=new TreeNode(val);
            
               }
               else  insertIntoBST(root->left,val); 
        }
        else{
        if(root->right==NULL){
            root->right=new TreeNode(val);
            
               }
               else  insertIntoBST(root->right,val);
        }
        return root;
    }

    



//Deleting a node in bst
node* deletenode(node* root, int key){
if(root==NULL) return NULL;
if(root->val==key)return helper(root);

node* curr =root;
while(root !=NULL){
    if(root->val > key){
        if(root!=NULL && root->left->val==key){
            root->left = helper(root->left);
            break;
        }
        else{
            root = root->left;
        }
    }
    else{
        if(root!=NULL && root->right->val==key){
            root->right = helper(root->right);
            break;
        }
        else{
            root = root->right;
        }
    }
}
return curr;
}
node* helper(node* root){

    if(root->left==NULL) return root->right;
    else if(root->right==NULL) return root->left;

    node* rightchild = root->right;
    node* lastright = findlastright(root->left);
    lastright->right = rightchild;
    return root->left;
}
node* findlastright(node* root){
    if(root==NULL) return NULL;
    while(root->right!=NULL){
        root = root->right;
    }
    return root;



// Kth largest and smallest element in BST




// Valid bst
 bool isvalidBST(node* root){
    return isvalidBST(root, INT_MIN, INT_MAX);

 }
 bool isvalidBST(node* root, int min, int max){
    if(root==NULL) return true;
    if(root->val < min || root->val > max) return false;

    return isvalidBST(root->left, min, root->val) && isvalidBST(root->right, root->val, max);
 }




//  lowest common ancestor in BST
 node lowestcommonancestor(node* root, node* p, node*q){
    if(root==NULL) return NULL;

    if(root->val > p->val && root->val > q->val){
        return lowestcommonancestor(root->left, p, q);
    }
    else if(root->val < p->val && root->val < q->val){
        return lowestcommonancestor(root->right, p, q);
    }
    else{
        return root;
    }
 }


// see chat gpt
 class Solution {
public:
    TreeNode* findMin(TreeNode* root) {
        TreeNode* curr = root;
        while (curr && curr->left != nullptr) {
            curr = curr->left;
        }
        return curr;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == nullptr) return nullptr;

        if (key < root->val) {
            root->left = deleteNode(root->left, key);
        } else if (key > root->val) {
            root->right = deleteNode(root->right, key);
        } else {
            // Node to delete found
            if (!root->left && !root->right) { // Leaf node
                delete root;
                return nullptr;
            } else if (!root->left) { // Only right child
                TreeNode* temp = root->right;
                delete root;
                return temp;
            } else if (!root->right) { // Only left child
                TreeNode* temp = root->left;
                delete root;
                return temp;
            } else { // Two children
                TreeNode* temp = findMin(root->right); // Inorder successor
                root->val = temp->val;
                root->right = deleteNode(root->right, temp->val);
            }
        }
        return root;
    }
};

// ==============================================================================================
// KTH smallext
class Solution {
public:
void inorder(TreeNode* root,int k,int& counter,int& ans){
if(root==nullptr)return ;
inorder(root->left,k,counter,ans);
counter++;
if(counter==k){
    ans=counter;
    return;
}
inorder(root->right,k,counter,ans);

}
    int kthSmallest(TreeNode* root, int k) {
        int counter=0;
        int ans=-1;
     inorder(root,k,counter,ans);
     return ans;
    }
};
// ========================================================================================================
// is a valid bst


class Solution {
public:
bool is_valid(TreeNode* root,int min_val,int max_val){
    if(root==nullptr)return true;
    if(root->val>=max_val || root->val<=min_val)return false;
    if(is_valid(root->left,min_val,root->val) && 
    is_valid(root->right,root->val,max_val))return true;
    else{
        return false;
    }
}
    bool isValidBST(TreeNode* root) {
        return is_valid(root,INT_MIN,INT_MAX);
        
    }
};

// OR
// SEE HOW RETURN STATEMENT IS USED IN BOOL
 class Solution {
public:
    bool is_valid(TreeNode* root, long long min_val, long long max_val) {
        if (root == nullptr) return true;
        if (root->val <= min_val || root->val >= max_val) return false;
        return is_valid(root->left, min_val, root->val) && 
               is_valid(root->right, root->val, max_val);
    }

    bool isValidBST(TreeNode* root) {
        return is_valid(root, LLONG_MIN, LLONG_MAX);
    }
};
// ===============================================================================================
// LCA IN A BST
   TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
   if(root->val==p->val || root->val==q->val) return root;
    else  if(root->val > p->val && root->val < q->val) return root;
    else  if(root->val < p->val && root->val > q->val) return root;
    else  if(root->val < p->val && root->val < q->val) return lowestCommonAncestor(root->right,p,q);
    else  return lowestCommonAncestor(root->left,p,q);
    }
};

// see striver method too

// ====================================================================================================

//  construct a BST from preorder traversal

// BRUTE 
class Solution {
public:
    // Function to insert a node into BST
    TreeNode* insert(TreeNode* root, int val) {
        if (root == nullptr) {
            return new TreeNode(val);
        }
        if (val < root->val)
            root->left = insert(root->left, val);
        else
            root->right = insert(root->right, val);
        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if (preorder.empty()) return nullptr;

        TreeNode* root = new TreeNode(preorder[0]);
        for (int i = 1; i < preorder.size(); i++) {
            insert(root, preorder[i]);
        }
        return root;
    }
};
// ===========================================================================
// OPTIMAL
node* bstfrompreorder(vector<int>& a){
int i=0;
return buildtree(a,i,INT_MAX);
}

node* buildtree(vector<int>& a, int& i, int bound){
    if(i==a.size() || a[i]>bound) return NULL;
    node* root = new node(a[i++]);
    root->left = buildtree(a, i, root->val);    
    root->right = buildtree(a, i, bound);
    return root;
    
}
// TIME COMPLEXITY=O(N)
// ===================================================================================================

// inorder succesor in a BST
node* inordersuccesor(node* root, node* p){
    node* succ =NULL;

while(root !=NULL){
    if(p->val>=root->val){
        root = root->right;
    }
    else{
        succ=root;
        root = root->left;
    }
}
return succ;
}


// =====================================================================================================
// BST iterator

class BSTIterator {
    stack<TreeNode*>st;
public:

void push(TreeNode* root){
TreeNode* curr=root;
while(curr!=nullptr){
    st.push(curr);
    curr=curr->left;
}

}
    BSTIterator(TreeNode* root) {
        push(root);
    }
    
    int next() {
        TreeNode* temp=st.top();
        st.pop();
        push(temp->right);
        return temp->val;
    }
    
    bool hasNext() {
    return   !st.empty();
    }
};


// =============================================================================
// Two sum in a bst
// One aproach for this is to store inorder traversal in an array and then find two sum,(but it is somehow more complex)
class Bstiterator{
    stack<TreeNode* >st;
    bool reverse=true;
public:
void push(TreeNode* root){
    TreeNode* curr=root;
    while(curr!=nullptr){
        st.push(curr);
        if(reverse==true){
            curr=curr->right;
        }
        else{
            curr=curr->left;
        }
    }
}
Bstiterator(TreeNode* root,bool Isreverse){
    reverse=Isreverse;
    push(root);
}
int Next(){
    TreeNode* temp=st.top();
    st.pop();
    if(!reverse)push(temp->right);
    else push(temp->left);
    return temp->val;
}

} ;
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
     if(root==nullptr)return false;

        Bstiterator l(root,false);
        Bstiterator r(root,true);

    int i=l.Next();
    int j=r.Next();
    while(i<j){
        if(i+j==k)return true;
        else if(i+j<k)i=l.Next();
        else j=r.Next();
    }
return false;
    }
};


// ==================================================================================

// RECOVER BINARY SEARCH TREE
class Solution {
public:
TreeNode* first=nullptr;
TreeNode* middle=nullptr;
TreeNode* prev=new TreeNode(INT_MIN);
TreeNode* last=nullptr;
void inoreder(TreeNode* root){
    if(root==nullptr)return ;
    inoreder(root->left);
    if(prev!=nullptr && root->val<prev->val){
        if(first==nullptr){
            first=prev;
            middle=root;
        }
        else{
            last=root;
        }
    }
    prev=root;
    inoreder(root->right);
}
    void recoverTree(TreeNode* root) {
        if(root==nullptr)return ;
        inoreder(root);
        if(first!=nullptr && last!=nullptr)swap(first->val,last->val);
        else if(first!=nullptr && middle!=nullptr)swap(first->val,middle->val);
    }
};

// =========================================================
//LARGEST BST IN BINARY TREE
// =======================================================================
// LARGEST BST IN AA BINARY TREE

// Brute force approach
// go on every node and use validate a bst code
// but TC would be O(n2)


#include <bits/stdc++.h>
using namespace std;

// Structure for tree node
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Helper class to store information for each subtree
class NodeValue {
public:
    int minNode, maxNode, maxSize;
    NodeValue(int minNode, int maxNode, int maxSize) {
        this->minNode = minNode;
        this->maxNode = maxNode;
        this->maxSize = maxSize;
    }
};

class Solution {
public:
    NodeValue largestBSTSubtreeHelper(TreeNode* root) {
        // Base case: An empty tree is a BST of size 0
        if (!root)
            return NodeValue(INT_MAX, INT_MIN, 0);

        // Recursively get values from left and right subtrees
        auto left = largestBSTSubtreeHelper(root->left);
        auto right = largestBSTSubtreeHelper(root->right);

        // Check if current subtree is a valid BST
        if (left.maxNode < root->val && root->val < right.minNode) {
            // It's a valid BST
            return NodeValue(
                min(root->val, left.minNode),
                max(root->val, right.maxNode),
                left.maxSize + right.maxSize + 1
            );
        }

        // Otherwise, return invalid BST markers
        return NodeValue(INT_MIN, INT_MAX, max(left.maxSize, right.maxSize));
    }

    int largestBSTSubtree(TreeNode* root) {
        return largestBSTSubtreeHelper(root).maxSize;
    }
};
