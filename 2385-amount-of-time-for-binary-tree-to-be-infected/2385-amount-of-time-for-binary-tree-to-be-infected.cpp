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
    TreeNode* findparent(TreeNode* root,unordered_map<TreeNode*,TreeNode*> & parent,int start)
{
    queue<TreeNode*>q;
    q.push(root);
    TreeNode* t=NULL;
    while(!q.empty())
    {
        int s=q.size();
        for(int i=0;i<s;i++)
        {
             TreeNode* node=q.front();
             if(node->val==start) t=node;
             q.pop();
             if(node->left)
             {
                parent[node->left]=node;
                q.push(node->left);
             }
             if(node->right)
             {
                parent[node->right]=node;
                q.push(node->right);
             }

        }
       
    }
    return t;
}
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<TreeNode*,TreeNode*>parent;
        TreeNode* target= findparent(root,parent,start);
        unordered_map<TreeNode*,int>vist;
        queue<TreeNode*>q;
        q.push(target);
        int cnt=0;
        vist[target]=1;
        while(!q.empty())
        {
            cnt++;
            int s=q.size();
            
            for(int i=0;i<s;i++)
            {
                TreeNode* node=q.front();
                q.pop();
               
                if(node->left&&vist[node->left]!=1)
                {
                    q.push(node->left);
                    vist[node->left]=1;
                   
                }
                if(node->right&&vist[node->right]!=1)
                {
                    q.push(node->right);
                    vist[node->right]=1;
                   
                }
                if(parent[node]&&vist[parent[node]]!=1)
                {
                    q.push(parent[node]);
                    vist[parent[node]]=1;
                   
                }
            }
        }


     return cnt-1;   
        
    }
};