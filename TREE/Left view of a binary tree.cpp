//Left View Of a Binary Tree



class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
       if(!root)
           return {};
        queue<TreeNode *>q;
        
        q.push(root);
      
        while(q.empty()==false){
           
            int count=q.size();
            for(int i=0;i<count;i++)
            {
            	TreeNode *curr=q.front();
                q.pop();
               
                if(i==0)// If it is first Node in that level then only print it
                  cout<<curr->val<<" ";
             
                
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
                
            }
            res.push_back(a);
        }
        return res;
    }
};
