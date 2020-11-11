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
    int res = 0;
    int findTilt(TreeNode* root) {
        if(root==NULL)
            return 0;
        tilt(root);
        return res;
    }
    
    void tilt(TreeNode* root) {
        if(root==NULL)
            return;
        root->val = abs(sumTree(root->left)-sumTree(root->right));
        res+=root->val;
        tilt(root->left);
        tilt(root->right);
        return;
    }
    
    int sumTree(TreeNode* root) {
        if(root==NULL)
            return 0;
        return root->val + sumTree(root->left) + sumTree(root->right);    
    }
};