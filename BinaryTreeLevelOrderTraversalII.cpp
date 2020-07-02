/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*> q1,q2;
        vector<vector<int>> res;
        if(root==NULL)
            return res;
        q1.push(root);
        vector<int> vec;
        vec.push_back(root->val);
        res.push_back(vec);
        vec.clear();
        while(!q1.empty() )
        {
            root=q1.front();
            q1.pop();            
            if(q1.empty())
            {                
                if(!q2.empty())
                    swap(q1, q2);             
                if(root->left!=NULL) 
                {
                    q1.push(root->left);
                    vec.push_back(root->left->val);
                }
                if(root->right!=NULL) 
                {
                    q1.push(root->right);
                    vec.push_back(root->right->val);
                }  
                if(!vec.empty())
                res.push_back(vec);
                vec.clear();
            }
            else
            {
                if(root->left!=NULL) 
                {
                    q2.push(root->left);
                    vec.push_back(root->left->val);
                }
                if(root->right!=NULL) 
                {
                    q2.push(root->right);
                    vec.push_back(root->right->val);
                } 
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
