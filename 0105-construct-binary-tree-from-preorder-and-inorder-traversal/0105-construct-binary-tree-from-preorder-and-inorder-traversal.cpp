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
    TreeNode* unitree(vector<int>& preorder,int ps,int pe,vector<int>& inorder,int is,int ie,unordered_map<int,int>& mpp)
    {
        if(ps>pe||is>ie) return NULL;
        TreeNode* root= new TreeNode(preorder[ps]);
        int idx=mpp[preorder[ps]];
        int dis=idx-is;

        root->left=unitree(preorder,ps+1,ps+dis,inorder,is,idx-1,mpp);
        root->right=unitree(preorder,ps+dis+1,pe,inorder,idx+1,ie,mpp);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>mpp;
        for(int i=0;i<inorder.size();i++)
        {
            mpp[inorder[i]]=i;

        }
        int ps=0;
        int pe=preorder.size()-1;
        int is=0;
        int ie=inorder.size()-1;
        return unitree(preorder,ps,pe,inorder,is,ie,mpp);
        
    }
};