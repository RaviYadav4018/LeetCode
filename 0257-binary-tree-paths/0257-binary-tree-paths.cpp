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
    void checkpath(TreeNode* root,vector<string>& res,string s)
    {
      if(root->left==NULL&&root->right==NULL) 
      {
        res.push_back(s);
        return;
      }
      if(root->left)
      {
        string val=to_string(root->left->val);
        string s1=s+"->"+val;
        checkpath(root->left,res,s1);
      }
      if(root->right)
      {
        string val=to_string(root->right->val);
        string s2=s+"->"+val;
        checkpath(root->right,res,s2);
      }
      return;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        if(root==NULL) return res;
        string s=to_string(root->val);
        checkpath(root,res,s);
        return res;
    }
};