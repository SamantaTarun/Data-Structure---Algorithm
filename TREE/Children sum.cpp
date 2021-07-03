// Children sum: sum of children value is equal to root

bool isCSum(Node *root)
{
	if(root==NULL)
	  return false;
	if(root->left==NULL && root->right==NULL)
	  return NULL;
	
	int sum=0;
	
	if(root->left!=NULL){
		sum+=root->left->key;
	}
	if(root->right!=NULL)
	{
		sum+=root->right->key;
	}
	
	return(root->key==sum && isCSum(root->left) && isCSum(root->right));
}
