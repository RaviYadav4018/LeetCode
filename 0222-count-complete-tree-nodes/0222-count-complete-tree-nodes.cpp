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
     int leftheight(TreeNode* root,int & lh)
     {
        if(root==NULL) return 0;
        lh=lh+1;
        if(root->left) leftheight(root->left,lh);
        return lh;
     }
     int rightheight(TreeNode* root,int &rh)
     {
        if(root==NULL) return 0;
        rh=rh+1;
        if(root->right) rightheight(root->right,rh);
        return rh;

     }
    int countNodes(TreeNode* root) {
        int lh=0;
        int rh=0;
        lh=leftheight(root,lh);
        rh=rightheight(root,rh);
        if(lh==rh) return (1<<lh)-1;
        return 1+countNodes(root->left)+countNodes(root->right);

        
    }
};