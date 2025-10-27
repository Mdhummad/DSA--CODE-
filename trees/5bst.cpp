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


// TWO SUM IN BST
// BRUTE FORCE SOL 
//  FIND INORDER TRAVERSAL AND STORE IT IN A VECTOR AND FIND SUM  USING TWO  POINTER









};



// BST iterator

class BSTiterator{
private:
stack<node*> st;
public:
BSTiterator(node* root) {
    pushLeft(root);
}

bool hasnext(){
    return !st.empty();
}

int next(){
    node* curr = st.top();
    st.pop();
    pushLeft(curr->right);
    return curr->val;
}

void pushLeft(node* root) {
    while (root) {
        st.push(root);
        root = root->left;
    }
}



};









int main() {
    BST tree;
    tree.root = tree.insertNode(tree.root, 10);
    tree.root = tree.insertNode(tree.root, 5);
    tree.root = tree.insertNode(tree.root, 15);

    cout << "Inorder Traversal: ";
    tree.inorderTraversal(tree.root);
    cout << endl;

    int key = 5;
    auto result = tree.search(key);
// Node* result = tree.search(key); // ❌ Error in main(): 'Node' not defined in global scope


    if (result)
        cout << "Found: " << result->data << endl;
    else
        cout << "Not found" << endl;



    auto minNode = tree.findMin();
    auto maxNode = tree.findMax();

    if (minNode) cout << "Min: " << minNode->data << endl;
    if (maxNode) cout << "Max: " << maxNode->data << endl;



    return 0;
}
