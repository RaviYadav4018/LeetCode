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
    TreeNode* checkcommon(TreeNode* root,TreeNode* p ,TreeNode* q)
    {
      if(root==NULL) return root;
      if(root==p||root==q) return root;
      
        TreeNode* lf=checkcommon(root->left,p,q);
     
     
        TreeNode* ri=checkcommon(root->right,p,q);

      
      if(lf==NULL) return ri;
      else if (ri==NULL) return lf;
      else return root;
      
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return root;
        return checkcommon(root,p,q);
    }
};