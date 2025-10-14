#include <iostream>
#include <vector>
#include <queue>
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

class solution_bfs
{
public:
    vector<vector<int>> levelOrder(Node *root)
    {
        vector<vector<int>> ans; // Initialize the answer vector
        if (root == NULL)
            return ans;

        queue<Node *> q;
        q.push(root);

        while (!q.empty())
        {
            int size = q.size();
            vector<int> level;

            for (int i = 0; i < size; i++)
            {
                Node *current = q.front();
                q.pop();
                level.push_back(current->data);

                if (current->left != NULL)
                    q.push(current->left);
                if (current->right != NULL)
                    q.push(current->right);
            }
            ans.push_back(level);
        }
        return ans;
    }





};


// // PRACTISE
// class solution{

// vector<vector<int>> bfs(node* root){
// vector<vector<int>> ans;
// if(root==NULL) return ans;
// queue<node*> q;
// q.push(root);


// while(!q.empty()){

// int n=q.size();
// vector<int> level;
// for(int i=0;i<n;i++){
//     node* curr=q.front();
//     q.pop();
//     level.push_back(curr->val);
//  if(curr->left !=NULL)q.push(curr->left);
//  if(curr->right !=NULL )q.push(curr->right);  
// }
// ans.push_back(level)


// }
// return ans;


// }
/*
vector<int> level_order(Node* root) {
    vector<int> ans;
    if (!root) 
        return ans;                // Handle empty tree

    queue<Node*> helper;
    helper.push(root);

    while (!helper.empty()) {
        Node* temp = helper.front(); 
        helper.pop();

        ans.push_back(temp->val);

        if (temp->left) 
            helper.push(temp->left);

        if (temp->right) 
            helper.push(temp->right);
    }

    return ans;
}




*/


// };







int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    solution_bfs sol;
    vector<vector<int>> result = sol.levelOrder(root);

    // Print result using index-based for loops
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
