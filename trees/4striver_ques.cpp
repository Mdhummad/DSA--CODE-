

#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm> // for std::max

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

class striver_EASY_solution
{
public:
// DO MINIMUM DEPTH OF A BINARY TOO
    int maxheight_recursive(Node *root)
    {
        if (root == NULL)
            return 0;
        int lh = maxheight_recursive(root->left);
        int rh = maxheight_recursive(root->right);

        // cout<<lh;
        // cout<<rh;
        return 1 + max(lh, rh);
    }

int leftHeight(Node* root) {
    if (root == NULL) return 0;
    return maxheight_recursive(root->left);
}



// ========================================================================
int count(Node* root){
    if(root==NULL)return 0;
    int left_count=count(root->left);
    int right_count=count(root->right);

    return left_count + right_count +1;
}
    // =-=================================================

    int maxheight_itertive(Node *root)
    {
        if (root == NULL)
            return 0;
        int level = 0;
        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            int size = q.size();
            level++;
            for (int i = 0; i < size; i++)
            {
                Node *current = q.front();
                q.pop();
                if (current->left != NULL)
                    q.push(current->left);
                if (current->right != NULL)
                    q.push(current->right);
            }
        }
        return level;
    }

    // BRUTE FORCE SOLUTION HAVING TIME COMPLEXITY O(N^2) AND SPACE COMPLEXITY O(H) WHERE H IS HEIGHT OF THE TREE IS WRITTEN IN HANDWRITTEN NOTES
//    ===================================================================================== =====================================================================================
// sum of a binary tree 

int sum(Node* root){
if(root==nullptr)return 0;
return root->val+sum(root->left)+sum(root->right);
}
//    =====================================================================================
int max_node(Node* root){
    if(root==nullptr)return 0;
    int lmax=max_node(root->left)
    int rmax=max_node(root->right)
    return max(root->val,max(lmax,rmax));
}

//    ===================================================================================== =====================================================================================
// balanced binary tree (for every node left(height)-right(height) should be less than or equal to  1)
 

bool isBalanced(Node *root)
    {
        int height = dfsHeight(root);
        if (height == -1)
            return false; 
        return true; // If height is not -1, the tree is balanced
    }
    int dfsHeight(Node *root)
    {
        if (root == NULL)
            return 0;
        int leftheight = dfsHeight(root->left);
        if (leftheight == -1)
            return -1;
        int rightheight = dfsHeight(root->right);
        if (rightheight == -1)
            return -1;
        if (abs(leftheight - rightheight) > 1)
            return -1; 
        // yha se aai hai -1 wali condition
        return 1 + max(leftheight, rightheight);
    }
// ================================================================================================================


    int diameterofbinarytree(Node *root)
    {
        int diameter = 0;
        height(root, diameter);
        return diameter;
    }
    int height(Node *root, int &diameter)
    {
        if (!root)
        {
            return 0;
        }
        int lh = height(root->left, diameter);
        int rh = height(root->right, diameter);
        diameter = max(diameter, lh + rh);
        return 1 + max(lh, rh);
    }
    // WRITE CODE TO GIVE THE PATH FOR MAX DIAMETER
    
 
    // ==================================================================================================

    // below solution is for maximum path sum in binary tree
    int maxpathsum(Node *root)
    {
        int maxi = INT64_MIN;
        maxpathdown(root, maxi); 
        return maxi;
    }
   
    int maxpathdown(Node *root, int &maxi)
    {
        if (root == NULL)
            return 0;
        int left = max(0, maxpathdown(root->left, maxi));   // Only consider positive contributions
        int right = max(0, maxpathdown(root->right, maxi)); // Only consider positive contributions
        maxi = max(maxi, left + right + root->data);        // Update the maximum  path sum
        return root->data + max(left, right);               // Return the maximum path sum including the
    }
// ===================================================================================================================================
    // are two tree same

bool is_same_tree(Node* p, Node* q ){
if(p==NULL || q==NULL){
    return (p==q);
}

if(p->val==q->val && is_same_tree(p->left,q->left) && is_same_tree(p->right,q->right))return true;
return false;


}
// =======================================================================================================
// INVERT A TREE
Node* invert_tree(Node* root){
if(root==nullptr)return root;

Node* temp=root->left;
root->left=root->right;
root->right=temp;

invert_tree(root->left);
invert_tree(root->right);
return root;


}

// =========================================================================================================================================

    // zig zag traversal
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>> ans;
        if(root==nullptr)return ans;
        bool left_to_right=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){

            int size=q.size();
            vector<int>sol;
            for(int i=0;i<size;i++){
                TreeNode* curr=q.front();
                q.pop();
                sol.push_back(curr->val);
                
                if(curr->left!=nullptr)q.push(curr->left);
                if(curr->right!=nullptr)q.push(curr->right);
            }
            if(left_to_right==1){
                    reverse(sol.begin(),sol.end());
                }

            ans.push_back(sol);
            left_to_right =! left_to_right;
        }

        return ans;
        
    }

    // BELOW IS STRIVER METHOD


//============================================================================================================================================= 
// same as above question
       vector<vector<int>> levelOrder(Node *root)
    {
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;

        queue<Node *> q;
        q.push(root);
        bool leftToRight = true;

        while (!q.empty())
        {
            int size = q.size();
            vector<int> level(size);

            for (int i = 0; i < size; i++)
            {
                Node *current = q.front();
                q.pop();

                // Find position to fill node's data
                int index = leftToRight ? i : size - 1 - i;
                level[index] = current->data;

                if (current->left)
                    q.push(current->left);
                if (current->right)
                    q.push(current->right);
            }

            ans.push_back(level);
            leftToRight = !leftToRight;  // flip direction
        }

        return ans;
    }
//===========================================================================================================================
    // 1)left boundary excluding leaf
    // 2)leaf node
    // 3)right boundary excluding leaf 


    // BOUNDARY TRAVERSAL
    // Helper: check if a node is a leaf
    bool isLeaf(Node *node)
    {
        return (node->left == NULL && node->right == NULL);
    }

    // Add left boundary (excluding leaves)
    void addLeftBoundary(Node *root, vector<int> &res)
    {
        Node *cur = root->left;
        while (cur)
        {
            if (!isLeaf(cur))
                res.push_back(cur->data);
            if (cur->left)
                cur = cur->left;
            else
                cur = cur->right;
        }
    }

    // Add right boundary (excluding leaves, bottom-up)
    // extra temp variable used for reversing the arra
    void addRightBoundary(Node *root, vector<int> &res)
    {
        Node *cur = root->right;
        vector<int> tmp;
        while (cur)
        {
            if (!isLeaf(cur))
                tmp.push_back(cur->data);
            if (cur->right)
                cur = cur->right;
            else
                cur = cur->left;
        }
        for (int i = tmp.size() - 1; i >= 0; --i)
        {
            res.push_back(tmp[i]);
        }
    }
// ABOVE WE CAN ALSO JUST REVERSE THE DATA BEFORE ADDING IT TO FINAL VECTOR


    // Add all leaves (left to right)
  void addLeafNodes(Node* root,vector<int>& res) {

    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL) {
     res.push_back(root->data);
        return;
    }
    addLeafNodes(root->left,res);
    addLeafNodes(root->right,res );
}
    // Main boundary traversal function
    vector<int> printBoundary(Node *root)
    {
        vector<int> res; 
        if (!root)
            return res;

        if (!isLeaf(root))
            res.push_back(root->data);

        addLeftBoundary(root, res);
        addLeafNodes(root, res);
        addRightBoundary(root, res);

        return res;
    }

    // ======================================================================================================
// vertical order traversal
    

vector<vector<int>> vertical_order_traversal(Node* root){
map<int,map<int,multiset<int>>> nodes;   //multiset is a container from the Standard Template Library (STL) that stores sorted elements (like set) but allows duplicate values.
queue<pair<Node*,pair<int,int>>> todo;

todo.push({root,{0,0}});
while(!todo.empty()){
auto p=todo.front();
todo.pop();

Node* curr=p.first();
int x=p.second.first;
int y=p.second.second;

node[x][y].insert(node->val);
if(node->left){
    todo.push({node->left,{x-1,y+1}});
 
if(node->right){
    todo.push({node->right,{x+1,y+1}});
      
}
}

vector<vector<int>> ans;

for(auto p:nodes){
    vector<int>cols;
    for(auto q: p.second){
        col.insert(col.end(),q.second.begin(),q.second.end());
    }
    ans.push_back(col);
}
return ans;


}












    // =================================================================================================================

    vector<int> topview(Node* root) {
        vector<int> ans;
        if (root == NULL) return ans;

        queue<pair<Node*, int>> q; // Pair of node and its horizontal distance
        map<int, int> mp; // Map to store the first node at each horizontal distance

        q.push({root, 0}); // Start with the root at horizontal distance 0

        while (!q.empty()) {
          
            Node* current = q.front().first;
            int hd = q.front().second;

            // If this is the first node at this horizontal distance, add it to the map
            if (mp.find(hd) == mp.end()) {
                mp[hd] = current->data;
            }

            // Push left child with horizontal distance -1
            if (current->left) {
                q.push({current->left, hd - 1});
            }
            // Push right child with horizontal distance +1
            if (current->right) {
                q.push({current->right, hd + 1});
            }
        }

        // Extract values from the map in sorted order of horizontal distances
        for (auto it : mp) {
            ans.push_back(it.second);
        }

        return ans;

 }




// ====================================================================================================================
// BOTTOM VIEW


    vector<int> bottomview(Node* root) {
        vector<int> ans;
        if (root == NULL) return ans;

        queue<pair<Node*, int>> q; // Pair of node and its horizontal distance
        map<int, int> mp; // Map to store the first node at each horizontal distance

        q.push({root, 0}); // Start with the root at horizontal distance 0

        while (!q.empty()) {
            Node* current = q.front().first;
            int hd = q.front{}.second;
                mp[hd] = current->data;
    // AS KEY IS UNIQUE SO IT WILL GIVE BOTTOM VIEW

            // Push left child with horizontal distance -1
            if (current->left) {
                q.push({current->left, hd - 1});
            }
            // Push right child with horizontal distance +1
            if (current->right) {
                q.push({current->right, hd + 1});
            }
        }

        // Extract values from the map in sorted order of horizontal distances
        for (auto it : mp) {
            ans.push_back(it.second);
        }

        return ans;




// ==============================================================================================================================
    // left/right view of binary tree

    //REVERSE PREORDER FOR RIGHT VIEW
    vector<int> leftview(Node *root)
    {
        vector<int> res;
        recursion(root, res, 0);
        return res;
    }
    void recursion(Node *root, vector<int> &res, int level)
    {
        if (root == NULL)
            return;

        // If this is the first node of this level, add it to the result
        if (level == res.size())
        {
            res.push_back(root->data);
        }

        // Recur for left and right subtrees
        recursion(root->left, res, level + 1);
        recursion(root->right, res, level + 1);
    }


//OBSERVE IT IS SIMILAR TO RECURSIVE PRINTING OF PREORDER ONLY BUT WITH A CONDITTION


    // ===========================================================================
    // symmetrical binary tree

    bool isSymmetric(Node *root)
    {
        return root == NULL || isSymmetricHelp(root->left, root->right);
    }

    // Helper function
    bool isSymmetricHelp(Node *left, Node *right)
    {
        // If either node is null, they must both be null to be symmetric
        if (left == NULL || right == NULL)
            return left == right;

        // If values are different, not symmetric
        if (left->data != right->data)
            return false;

        // Recurse: check outside and inside pairs
        return isSymmetricHelp(left->left, right->right) &&
               isSymmetricHelp(left->right, right->left);
    }



    class Solution {
public:
bool asymmetric(TreeNode* left,TreeNode* right){
    if(right==nullptr ||left==nullptr)return (right==left);
    if((left->val==right->val)&& asymmetric(left->right,right->left) &&  asymmetric(left->left,right->right)) return true;
    return false;
}
    bool isSymmetric(TreeNode* root) {
     if (root==nullptr)return 0;   
    
    return asymmetric(root->left,root->right);
    }
};

// ==============================================================================================================================================================================

    }}}}



    