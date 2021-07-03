//Height Balannced Binary Tree
//abs(height of LT-height of RT)<=1

class Solution {
    int height(TreeNode *root)
    {
        if(root==NULL)
            return NULL;
        return 1+max(height(root->left),height(root->right));
    }
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        int lh=height(root->left);
        int rh=height(root->right);
        
        return(abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right));
        
    }
};
