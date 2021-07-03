 
 //Maximum width of a binary tree
 // maximum number of nodes in a level;
 
 vector<vector<int>> levelOrder(TreeNode* root) {
        
       if(!root)
           return {};
        queue<TreeNode *>q;
        int res=INT_MIN;
        q.push(root);
        //vector<vector<int>>res;
        while(q.empty()==false){
            
            int count=q.size();
            res=max(res,count); // Ma
            for(int i=0;i<count;i++)
            {
               
                TreeNode *curr=q.front();
                q.pop();
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
                
            }
            
        }
        return res;
    }
