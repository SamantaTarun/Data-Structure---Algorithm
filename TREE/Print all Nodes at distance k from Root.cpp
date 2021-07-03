// Print all Nodes at distance k from Root


void PrintKdist(TreeNode *root,int k)
    {
        if(root==NULL)
            return;
        if(k==0)
            vect.push_back(root->val);
        else
        {
            PrintKdist(root->left,k-1);
            PrintKdist(root->right,k-1);
        }
    }
