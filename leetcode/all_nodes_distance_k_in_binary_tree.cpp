/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int K) {
        vector<int> res;
        int temp = distanceKUtil(root,target,K,res);
        return res;
    }
    
    int distanceKUtil(TreeNode* root, TreeNode* target, int k, vector<int> &res) {
        if(root==NULL)
            return -1;
        
        if(root==target) {
            distanceKDown(root,k,res);
            return 0;
        }
        
        int dl = distanceKUtil(root->left,target,k,res);
        
        if(dl!=-1) {
            if(dl+1==k)
                res.push_back(root->val);
            else
                distanceKDown(root->right,k-dl-2,res);
            
            return 1+dl;
        }
        
        int dr = distanceKUtil(root->right,target,k,res);
        
        if(dr!=-1) {
            if(dr+1==k)
                res.push_back(root->val);
            else
                distanceKDown(root->left,k-dr-2,res);
            
            return 1+dr;
        }
        
        return -1;
    }
    
    void distanceKDown(TreeNode* root, int k, vector<int> &res) {
        if (root == NULL || k < 0)  return; 
        
        if(k==0) {
            res.push_back(root->val);
            return;
        }
            
        distanceKDown(root->left,k-1,res);
        distanceKDown(root->right,k-1,res);
    }
};