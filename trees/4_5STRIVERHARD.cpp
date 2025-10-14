// ROOT TO LEAVES PATH

class Solution {
public:
void helper(TreeNode* root,string s,vector<string>&ans){
if (root==NULL) return;
string a=to_string(root->val);
if(root->left==NULL && root->right==NULL){
s+=a;
ans.push_back(s);
return;
}
helper(root->left,s+a+"->",ans);
helper(root->right,s+a+"->",ans);
}


 vector<string> binaryTreePaths(TreeNode* root) {
  vector<string>ans;
  helper(root,"",ans);
  return ans;

    }
}; 




// ======================================================================================
// root to node path  
    //  we use backtracking for this question
    //   we use inorder traversal for this question


    bool getPath(Node *root, vector<int> &arr, int x)
    {
        if (!root)
            return false;

        arr.push_back(root->data); // Add current node to path

        if (root->data == x)
            return true;

        // Check left and right subtrees  
        if (getPath(root->left, arr, x) || getPath(root->right, arr, x))
            return true;

        arr.pop_back(); // Backtrack if not found
        return false;
    }

    vector<int> solve(Node *A, int B)
    {
        vector<int> arr;
        if (!A)
            return arr;
        getPath(A, arr, B);
        return arr;
    }
    
//====================================================================================================================================================================================================================================================================
// SEE shash code video if you dont understand
// love babbar too
// codestorywithmik
    lowest common ancestor
     class Solution {
     public:
         TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
             // Base case
             if(root==null)return NULL;
             if ( root == p || root == q) {
                 return root;
             }

            TreeNode* left = lowestCommonAncestor(root->left, p, q);
            TreeNode* right = lowestCommonAncestor(root->right, p, q);

            if (left != NULL && right!=NULL)
                return root;
            if (left != NULL)
                return left;
            else{
            return right;
        }  
    }
//===============================================================================================================================================================================================================

    // maximum width of binary tree
// first index-last index+1

    class Solution {
    public:
        int widthOfBinaryTree(TreeNode* root) {
            if (!root)
                return 0;

            int ans = 0;
            queue<pair<TreeNode*, int>> q;
            q.push({root, 0});

            while (!q.empty()) {
                int size = q.size();
                int min = q.front().second; // to make the ID start from 0
                int first, last;

                for (int i = 0; i < size; i++) {
                    int cur_id = q.front().second - min;
                    TreeNode* node = q.front().first;
                    q.pop();

                    if (i == 0) first = cur_id;
                    if (i == size - 1) last = cur_id;

                    if (node->left)
                        q.push({node->left, cur_id * 2 + 1});
                    if (node->right)
                        q.push({node->right, cur_id * 2 + 2});
                }
                ans = max(ans, last - first + 1);
            }

            return ans;
        }
    };




    //===================================================================================================

    // children sum property

    
    class Solution {
    public:
        void changeTree(BinaryTreeNode<int>* root) {
            if (root == NULL) return;

            int child = 0;

            // Sum up children's data
            if (root->left)
                child += root->left->data;

            if (root->right)
                child += root->right->data;

            // If children's sum is greater than root's data
            if (child >= root->data) {
                root->data = child;
            }
            else {
                // If root's data is greater, push it down
                if (root->left)
                    root->left->data = root->data;
                else if (root->right)
                    root->right->data = root->data;
            }

            // Recursive call
            changeTree(root->left);
            changeTree(root->right);

            // Recalculate total after updates
            int tot = 0;
            if (root->left) tot += root->left->data;
            if (root->right) tot += root->right->data;

            if (root->left    || root->right)
                root->data = tot;
        }
    };
// ====================================================================================================================
// PRINT ALL NODES AT A DISTANCE OF K IN A BINARY TREE

public:
    // Step 1: Map each node to its parent using BFS
    void markparents(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& parent_track) {
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();

            if (curr->left) {
                parent_track[curr->left] = curr;
                q.push(curr->left);
            }
            if (curr->right) {
                parent_track[curr->right] = curr;
                q.push(curr->right);
            }
        }
    }

    // Step 2: BFS from the target node
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*> parent_track;  
        markparents(root, parent_track); // build parent map

        unordered_map<TreeNode*, bool> visited;
        queue<TreeNode*> q;
        q.push(target);
        visited[target] = true;

        int curr_level = 0;
        while (!q.empty()) {
            int size = q.size();
            if (curr_level == k) break;  // stop at k-th level
            curr_level++;

            for (int i = 0; i < size; i++) {
                TreeNode* curr = q.front();
                q.pop();

                // check left child
                if (curr->left && !visited[curr->left]) {
                    q.push(curr->left);
                    visited[curr->left] = true;
                }

                // check right child
                if (curr->right && !visited[curr->right]) {
                    q.push(curr->right);
                    visited[curr->right] = true;
                }

                // check parent
                if (parent_track.find(curr) != parent_track.end() && !visited[parent_track[curr]]) {
                    q.push(parent_track[curr]);
                    visited[parent_track[curr]] = true;
                }
            }
        }

        // Collect all nodes at distance k
        vector<int> result;
        while (!q.empty()) {
            result.push_back(q.front()->val);
            q.pop();
        }
        return result;
    }
// =======================================================================================================
 void markparents(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& parent_track,int start) {
        queue<TreeNode*> q;
        TreeNode* res;
        q.push(root);
        while (!q.empty()) {
            TreeNode* curr = q.front();
            if(curr->data==start)res=curr;
            q.pop();

            if (curr->left) {
                parent_track[curr->left] = curr;
                q.push(curr->left);
            }
            if (curr->right) {
                parent_track[curr->right] = curr;
                q.push(curr->right);
            }
        }
    }



int minimal_time_to_burn(TreeNode* root,int start) {
        unordered_map<TreeNode*, TreeNode*> parent_track;  
        TreeNode* target=markparents(root, parent_track,start); // build parent map

        unordered_map<TreeNode*, bool> visited;
        queue<TreeNode*> q;
        q.push(target);
        visited[target] = true;

        int maxi=0;
        while (!q.empty()) {
            int size = q.size();
            int flag=0;

            for (int i = 0; i < size; i++) {
                TreeNode* curr = q.front();
                q.pop();

                // check left child
                if (curr->left && !visited[curr->left]) {
                    flag=1;
                    q.push(curr->left);
                    visited[curr->left] = true;
                }

                // check right child
                if (curr->right && !visited[curr->right]) {
                   flag=1;
                    q.push(curr->right);
                    visited[curr->right] = true;
                }

                // check parent
                if (parent_track.find(curr) != parent_track.end() && !visited[parent_track[curr]]) {
                    flag=1;
                    q.push(parent_track[curr]);
                    visited[parent_track[curr]] = true;
                }
            }
            if(flag)maxi++;
        }
return maxi;
        }

    }






// ===========================================================================================
    // nodes in a complete binary tree in O (logn)
// SOLUTION WITH BIG O(N)
int countNodes(TreeNode* root) {
    if(root == NULL) return 0;

    return 1 + countNodes(root->left) + countNodes(root->right);
}
// ==========================================================================

// O(LOGN )solution

    int countNodes(TreeNode* root) {
        if (root == NULL) return 0;

        int lh = findHeightLeft(root);
        int rh = findHeightRight(root);

        if (lh == rh)
            return (1 << lh) - 1;

        return 1 + countNodes(root->left) + countNodes(root->right);
    }

    int findHeightLeft(TreeNode* node) {
        int hght = 0;
        while (node) {
            hght++;
            node = node->left;
        }
        return hght;
    }

    int findHeightRight(TreeNode* node) {
        int hght = 0;
        while (node) {
            hght++;
            node = node->right;
        }
        return hght;
    }


    // =================================================================================================
    //REQUIREMENTS NEEDEDTO CONSTRUCT A UNIQUE BINARY TREE



    /*
    whenever we are given a inorder and either a postorder or preorder we can construct a unique binary tree
    
    so basically

    inorder + preorder===UNIQUE
    inprder + postorder===UNIQUE
    preorder+ postorder ===NOT UNIQUE
    
    */