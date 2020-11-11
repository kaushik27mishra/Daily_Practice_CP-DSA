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
    int maxAncestorDiff(TreeNode* root) {
        if(root == NULL)
            return 0;
        return helper(root,root->val,root->val);
    }
    
    int helper(TreeNode* root, int cmax,int cmin) {
        if(root==NULL)
            return cmax-cmin;
        
        cmax = max(cmax,root->val);
        cmin = min(cmin,root->val);
        int left = helper(root->left,cmax,cmin);
        int right = helper(root->right,cmax,cmin);
        return max(left,right);
    }
};