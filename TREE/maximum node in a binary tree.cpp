int getSize(Node *root)
{
	if(root==NULL)
	   return 0;
	else
	   return max(root->key,max(getSize(root->left),getSize(root->right)));
}
