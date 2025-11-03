// lettcode 501
// see how he has used dfs for traversal and add value to map

class Solution {
public:
    unordered_map<int,int>mp;

    void dfs(TreeNode* root){
        if(root==nullptr)return;
        dfs(root->left);
        mp[root->val]++;
        dfs(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        dfs(root);
        vector<int>result;
        int max_freq=0;
    for (auto it : mp) {
            max_freq = max(max_freq, it.second);
        }
        for (auto it : mp) {
            if (it.second == max_freq)
                result.push_back(it.first);
        }

        return result;
    }
};

// =====================================================================