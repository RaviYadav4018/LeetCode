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
void findparent(TreeNode* root,unordered_map<TreeNode*,TreeNode*> & parent)
{
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty())
    {
        int s=q.size();
        for(int i=0;i<s;i++)
        {
             TreeNode* node=q.front();
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
}
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        
        unordered_map<TreeNode*,TreeNode*>parent;
        findparent(root,parent);
    
        unordered_map<TreeNode*,int>vist;
        queue<TreeNode*>q;
        vector<int>ans;
        if(k==0) 
        {
           ans.push_back(target->val);
        }
        q.push(target);
        int cnt=0;
        vist[target]=1;
        while(!q.empty()&&cnt<k)
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
                    if(cnt==k) ans.push_back(node->left->val);
                }
                if(node->right&&vist[node->right]!=1)
                {
                    q.push(node->right);
                    vist[node->right]=1;
                   if(cnt==k)  ans.push_back(node->right->val);
                }
                if(parent[node]&&vist[parent[node]]!=1)
                {
                    q.push(parent[node]);
                    vist[parent[node]]=1;
                   if(cnt==k)  ans.push_back(parent[node]->val);
                }
            }
        }


     return ans;   
    }
};