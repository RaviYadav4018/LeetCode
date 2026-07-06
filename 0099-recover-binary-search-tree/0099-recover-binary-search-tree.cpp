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
    TreeNode* first;
    TreeNode* middle;
    TreeNode* last;
    TreeNode* prev;
    void checkinorder(TreeNode* root)
    {
        if(root==NULL) return ;
        checkinorder(root->left);
        if(prev!=NULL&&prev->val>root->val)
        {
            if(first==NULL)
            {
                first=prev;
                middle=root;
            }
            else
            {
                last=root;
            }
        }
         prev=root;
        checkinorder(root->right);
       
    }
    void recoverTree(TreeNode* root) {
        first=middle=last=NULL;
        prev=new TreeNode(INT_MIN);
        checkinorder(root);
        if(first&&last) swap(first->val,last->val);
        else if(first&&middle&&!last) swap(first->val,middle->val);

        
    }
};