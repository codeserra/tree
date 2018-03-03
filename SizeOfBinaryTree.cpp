int SizeOfBinaryTree( struct BinaryTreeNode* root)
{
    if(root==NULL)
         return 0
    else
         return (SizeOfBinaryTree(root->left) +1+ SizeOfBinaryTree(root->right));
}
