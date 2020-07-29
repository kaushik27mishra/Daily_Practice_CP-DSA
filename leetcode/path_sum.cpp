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
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL)
            return false;
        
         return helper(root,sum);
    }
    
    bool helper(TreeNode* root,int sum) {
        if(root==NULL)
            return false;
        sum=sum-root->val;
        if(root->left==NULL && root->right==NULL && sum==0)
            return true;
        
        return helper(root->left,sum) || helper(root->right,sum);
    }
};