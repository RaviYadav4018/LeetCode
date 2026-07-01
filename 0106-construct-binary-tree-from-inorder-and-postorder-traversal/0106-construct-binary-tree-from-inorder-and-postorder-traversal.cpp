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
TreeNode* unitree(vector<int>& postorder,int ps,int pe,vector<int>& inorder,int is,int ie,unordered_map<int,int>& mpp)
    {
        if(ps>pe||is>ie) return NULL;
        TreeNode* root= new TreeNode(postorder[pe]);
        int idx=mpp[postorder[pe]];
        int dis=idx-is;

        root->left=unitree(postorder,ps,ps+dis-1,inorder,is,idx-1,mpp);
        root->right=unitree(postorder,ps+dis,pe-1,inorder,idx+1,ie,mpp);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
          unordered_map<int,int>mpp;
        for(int i=0;i<inorder.size();i++)
        {
            mpp[inorder[i]]=i;

        }
        int ps=0;
        int pe=postorder.size()-1;
        int is=0;
        int ie=inorder.size()-1;
        return unitree(postorder,ps,pe,inorder,is,ie,mpp);
        
    }
};