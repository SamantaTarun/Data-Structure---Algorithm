//Diameter Of a  Binary Tree

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
    int Solve(TreeNode *root,int &res)
    {
        if(root==NULL)
            return 0;
        int l=Solve(root->left,res);
        int r=Solve(root->right,res);
        
        int temp=max(l,r)+1;
        
        int ans=max(temp,1+l+r);
        res=max(res,ans);
        
        
        return temp;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(!root)
            return NULL;
        int res=INT_MIN;
        Solve(root,res);
        return res-1;
    }
};
