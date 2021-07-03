// Right side view of a Binary Tree




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
    vector<int>vect;
    vector<int> rightSideView(TreeNode* root) {
        
        if(root==NULL)
            return {};
        queue<TreeNode *>q;
        q.push(root);
        TreeNode *p;
        vector<int>vect;
        while(!q.empty())
        {
            int count=q.size();
            while(count>0)
            {
                p=q.front();
                q.pop();
                
                if(p->left!=NULL)
                    q.push(p->left);
                if(p->right!=NULL)
                    q.push(p->right);
                
                count--;
              
                    
            }
            vect.push_back(p->val);
        }
        
        return vect;
    }
};
