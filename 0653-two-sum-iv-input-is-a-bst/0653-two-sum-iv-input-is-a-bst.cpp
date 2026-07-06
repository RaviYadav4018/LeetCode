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
    void findinorder(TreeNode* root,vector<int>& res)
    {
        if(root==NULL) return;
        findinorder(root->left,res);
        res.push_back(root->val);
        findinorder(root->right,res);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>res;
        findinorder(root,res);
        int l=0;
        int r=res.size()-1;
        while(l<r)
        {
            int sum=res[l]+res[r];
            if(sum==k) return true;
            else if(sum<k) l++;
            else r--;
            
        }
        return false;
        
    }
};