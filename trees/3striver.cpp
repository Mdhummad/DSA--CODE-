#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

class solution_iterative_preorder
{
public:
    vector<int> preorderTraversal(Node *root)
    {
        vector<int> preorder;
        if (root == NULL)
            return preorder; 
        stack<Node *> st;
        st.push(root);
        while (!st.empty())
        {
            Node *current = st.top();
            st.pop();
            preorder.push_back(current->data);

            if (current->right != NULL)
                st.push(current->right);
            if (current->left != NULL)
                st.push(current->left);
        // HI Codes i used to think what is lonliness until i personally felt it ,its hard really hard but at the same time very motivating ,i think i will just not survive but will thrive through it ,i will make it and for sure i would have the ppo INSHALLAH 

     //above we have created node * current which is pointing to the top of stack but we can also write code without using it
            /*
            root = st.top();
            st.pop();
            preorder.push_back(root->data);
            if (root->right != NULL)
                st.push(root->right);
            if (root->left != NULL)
                st.push(root->left);
            */
        }
        return preorder;
    }

// vector<int> preordertraversal(Node* root){
// vector<int> sol;
// if(root==NULL)return;

// stack<Node*> st;
// st.push(root);
// while(!st.empty()){
// Node* curr=st.front();
// st.pop();
// sol.push_back(curr->val);
// if(curr->right!=null)st.push(curr->right);
// if(curr->left!=null)st.push(curr->left);

// }




}





vector<int> inorder_traversal(Node* root){
stack<Node*> st;
Node* node=root;
vector<int> inorder;
while(true){
    if(node != NULL){
        st.push(node);
        node=node->left;
    }
    else{// If node is NULL, we need to process the top of the stack
        if(st.empty()== true)break;
            // If stack is empty, we have traversed the entire tree
        node=st.top();
        st.pop();
        inorder.push_back(node->data);
        node=node->right;
    }
    
} 
return inorder;

}




// POST ORDER TRAVERSAL USING 2 STACKS
vector<int> postorder_traversal(Node* root){
stack<Node*> st1;
stack<Node*> st2;
vector<int> postder;
if(root == NULL) return postder;
st1.push(root);
while(!st1.empty()){
  root=st1.top();
  st1.pop();
  st2.push(root);
    if(root->left != NULL) st1.push(root->left);
    if(root->right != NULL) st1.push(root->right);
    
}
// Now we need to pop elements from st2 and push them into postder
while(!st2.empty()){
    postder.push_back(st2.top()->data);
    st2.pop();




}
return postder; 
    
} 
vector<int> allTraversal(node* root) {
    vector<int> pre, in, post;
    stack<pair<node*, int>> st;

    if (root != NULL)
        st.push({root, 1});

    while (!st.empty()) {
        auto it = st.top(); // use auto here
        st.pop();

        if (it.second == 1) {
            pre.push_back(it.first->val);
            it.second++;
            st.push(it);
            if (it.first->left != NULL)
                st.push({it.first->left, 1});
        }

        else if (it.second == 2) {
            in.push_back(it.first->val);
            it.second++;
            st.push(it);
            if (it.first->right != NULL)
                st.push({it.first->right, 1});
        }

        else {
            post.push_back(it.first->val);
        }
    }

}

// ==========================================================================================================

// construct a binary tree when inorder and preorder is given

// L34,35 DO IT OWN YOUR OWN FROM LOVE BABBAR





Node* buildTreeHelper(vector<int>& preorder, int& preIndex,
                      vector<int>& inorder, int inStart, int inEnd,
                      map<int, int>& inMap) {
    // Base case
    if (preIndex >= preorder.size() || inStart > inEnd) {
        return NULL;
    }

    int rootVal = preorder[preIndex++];
    Node* root = new Node(rootVal);

    int inIndex = inMap[rootVal];

    // Build left and right subtree
    root->left = buildTreeHelper(preorder, preIndex, inorder, inStart, inIndex - 1, inMap);
    root->right = buildTreeHelper(preorder, preIndex, inorder, inIndex + 1, inEnd, inMap);

    return root;
}

Node* buildTree(vector<int>& preorder, vector<int>& inorder) {
    map<int, int> inMap;
    for (int i = 0; i < inorder.size(); i++) {
        inMap[inorder[i]] = i;
    }

    int preIndex = 0;
    return buildTreeHelper(preorder, preIndex, inorder, 0, inorder.size() - 1, inMap);
}




// WHEN POSTORDER AND INORDER IS GIVEN


Node* buildTreeHelper(vector<int>& postorder, int& postIndex,
                      vector<int>& inorder, int inStart, int inEnd,
                      map<int, int>& inMap) {
    // Base case
    if (postIndex < 0 || inStart > inEnd) {
        return NULL;
    }

    int rootVal = postorder[postIndex--];
    Node* root = new Node(rootVal);

    int inIndex = inMap[rootVal];

    // Build right subtree first, then left
    root->right = buildTreeHelper(postorder, postIndex, inorder, inIndex + 1, inEnd, inMap);
    root->left = buildTreeHelper(postorder, postIndex, inorder, inStart, inIndex - 1, inMap);

    return root;
}

Node* buildTree(vector<int>& postorder, vector<int>& inorder) {
    map<int, int> inMap;
    for (int i = 0; i < inorder.size(); i++) {
        inMap[inorder[i]] = i;
    }

    int postIndex = postorder.size() - 1;
    return buildTreeHelper(postorder, postIndex, inorder, 0, inorder.size() - 1, inMap);
}
// =========================================================================================

// MORRIS TRAVERSAL
// see shradha khapra video
vector<int> inorder_traversal(Node* root){
vector<int> ans;

node* curr=root;
while(curr!=NULL){
    if(curr->Left==NULL){
        ans.push_back(curr->val);
        curr=curr->right;
    }
    else{
        node* IP=curr->left;
        while(IP->right!=NULL && IP->right!=curr){
            IP=IP->right;
        }

        if(IP->right==NULL){
            IP->right=curr;
            curr=curr->left;
        }
        else{
            IP->right=NULL;
            ans.push_back(curr->val);
            curr->curr->right;

        }


    }



}




}






}; 

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    solution_iterative_preorder sol;
    vector<int> result = sol.preorderTraversal(root);

    // Print the preorder traversal
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}









/*
PRACTISE


vector<int> iterative_preorder(node* root) {
    vector<int> preorder;
    if (root == nullptr) return preorder;

    stack<node*> st;
    st.push(root);  

    while (!st.empty()) {  // Fix: added parentheses
        node* curr = st.top();
        st.pop();
        preorder.push_back(curr->val);

        // Push right first, then left (so left is processed first)
        if (curr->right != nullptr) st.push(curr->right);  
        if (curr->left != nullptr) st.push(curr->left);    
    }

    return preorder;  
}

}



postorder

vector<int> postorder(node* root) {
    vector<int> ans;
    if (root == NULL) return ans;

    stack<node*> st1, st2;
    st1.push(root);

    while (!st1.empty()) {
        node* curr = st1.top();
        st1.pop();
        st2.push(curr);

        if (curr->left != NULL)
            st1.push(curr->left);
        if (curr->right != NULL)
            st1.push(curr->right);
    }

    while (!stdd.empty()) {
        node* curr2 = st2.top();
        st2.pop();
        ans.push_back(curr2->val);
    }

    return ans;
}






*/