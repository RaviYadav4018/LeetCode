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
    bool checkview(TreeNode* root,vector<int>& res,int l)
    {
        if(root==NULL) return true;
        if(res.size()==l) res.push_back(root->val);
        checkview(root->right,res,l+1);
        checkview(root->left,res,l+1);
        return true;
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        int l=0;
        if(root==NULL) return res;
        checkview(root,res,l);
        return res;
        
    }
};