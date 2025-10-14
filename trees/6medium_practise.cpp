class node{
public:
int val;
node* left;
node* right;

node(int data){
val=data;
left=nullptr;
right=nullptr;
}
};

int level_or_height(node* root){
if(root==nullptr)return 0;
int left=level_or_height(root->left);
int right=level_or_height(root->right);
return 1+max(left,right);
}



int count_node(node*root){
if(root==nullptr)return 0;
int left=count_node(root->left);
int right=count_node(root->right);
return 1+ left + right;
}


int sum_of_tree(Node* root){
if(root==nullptr)return 0;
int left=sum_of_tree(root->left);
int right=sum_of_tree(root->right);
return root->val+left+right;
}


int max_node(node* root){
if(root==nullptr)return 0;
int left=max_node(root->left);
int right=max_node(root->right);

int maxi=max(left,right);

return max(root->val,maxi)
}


int levels(node* root){
if(root==nullptr)return 0;
return 1+max(level(root->left,root->right));
}


int diameterofbinarytree(node* root){
if(root==nullptr)return 0;
int dia=levels(root->left)+level(root->right);
maxdia=max(maxdia,dia);
diameterofbinarytree(root->left;);
diameterofbinarytree(root->right);
}



// the below code will give maximum pathh sum between root to node
int path_sum(node* root){
if(root==nullptr)return 0;
int left=path_sum(root->left);
int right=path_sum(root->righ);
return root->val + max(left,right);
}


// this function will give maximum path sum in a binary tree

int max_path_util(node* root, int &maxsum) {
    if (root == nullptr) return 0;

    // Calculate max path sum on left and right; ignore negatives
    int left = max(0, max_path_util(root->left, maxsum));
    int right = max(0, max_path_util(root->right, maxsum));

    // Update global maxsum: path passing through this root
    maxsum = max(maxsum, root->val + left + right);

    // Return max path including this node
    return root->val + max(left, right);
}

int max_path_sum(node* root) {
    int maxsum = INT_MIN;
    max_path_util(root, maxsum);
    return maxsum;
}


int check_height(node* root) {
    if (root == nullptr) return 0;

    int left = check_height(root->left);
    if (left == -1) return -1;

    int right = check_height(root->right);
    if (right == -1) return -1;

    if (abs(left - right) > 1) return -1; // not balanced

    return 1 + max(left, right);
}

// =========================================================================
