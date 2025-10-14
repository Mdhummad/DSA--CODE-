// 1) do right side view of a tree using queue

// 2)completeness if a binary tree
 bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        bool past=false;

        while(!q.empty()){
            TreeNode* curr=q.front();
                q.pop();
        if(curr==NULL){
            past=true;
        } 
        else{
            if(past){
                return false;
            }

        q.push(curr->left);
        q.push(curr->right);


        }

      

        }
        return true;
    }

    //============================================================================================================================================================================\

    // RETURN FOREST
    class Solution {
public:
    TreeNode* deletehelper(TreeNode* root,  unordered_set<int>& st, vector<TreeNode*>& result){
if(root==NULL) return NULL;
root->left=deletehelper(root->left,st,result);
root->right=deletehelper(root->right,st,result);

if(st.find(root->val)!=st.end()){
    if(root->left!=NULL)result.push_back(root->left);
    if(root->right!=NULL)result.push_back(root->right);
    return NULL;
}

else{
    return root;
}

    }




    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
    vector<TreeNode*>result;

    unordered_set<int> st;        

    for(auto it:to_delete){
        st.insert(it);
    }

    deletehelper(root,st,result);
    if(st.find(root->val)==st.end()){
        result.push_back(root);


    }

return result;
    }
};