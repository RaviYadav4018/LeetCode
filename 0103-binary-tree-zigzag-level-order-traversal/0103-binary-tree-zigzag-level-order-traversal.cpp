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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==NULL) return res;

        queue<TreeNode*>q;
        q.push(root);
        bool ltr=true;
        while(!q.empty())
        {
            int n= q.size();
            vector<int>ans(n);
            for(int i=0;i<n;i++)
            {
                TreeNode* node=q.front();
                int idx=i;
                if(ltr==false) idx=n-1-i;
                ans[idx]=node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                
                q.pop();

            }
            res.push_back(ans);
            ltr=(!ltr);
        }
      return res;  
    }
};