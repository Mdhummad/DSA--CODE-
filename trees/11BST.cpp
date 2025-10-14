/* searching in a BST*/
/*
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
     if(root==NULL) return NULL;
     else if(root->val==val) return root;
     else if(root->val>val)return searchBST(root->left,val);
     else return searchBST(root->right,val);

    }
};

*/
// ==========================================================================================================

/*
INSERTION IN A LINKED LIST

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


// ==============================================================================================================
// LOWEST COMMON ANCESTOR
    /*
    class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
   if(root->val==p->val || root->val==q->val) return root;
    else  if(root->val > p->val && root->val < q->val) return root;
    else  if(root->val < p->val && root->val > q->val) return root;
    else  if(root->val < p->val && root->val > q->val) return lowestCommonAncestor(root->right,p,q);
    else  return lowestCommonAncestor(root->left,p,q);
    }
};
    
     */






