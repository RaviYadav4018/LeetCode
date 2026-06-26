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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>res;
        if(root==NULL) return res;
        map<int,map<int,multiset<int>>>nodes;
        queue<pair<TreeNode*,pair<int,int>>>todo;
        todo.push({root,{0,0}});
        while(!todo.empty())
        {
            auto it=todo.front();
            todo.pop();
            TreeNode* node=it.first;
            int x=it.second.first;
            int y=it.second.second;
            if(node->left) todo.push({node->left,{x-1,y+1}});
            if(node->right) todo.push({node->right,{x+1,y+1}});

            nodes[x][y].insert(node->val);

        }
        for(auto p:nodes)
        {
            vector<int>ans;
            for(auto q:p.second)
            {
                ans.insert(ans.end(),q.second.begin(),q.second.end());

            }
            res.push_back(ans);
        }


        return res;
    }
};