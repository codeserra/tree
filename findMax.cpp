# include <iostream>
using namespace std;

int findMax( struct binaryTreeNode* root)
{
    int root_val, left, right, max=INT_MIN;
    if (root!=NULL)
    {
         root_val = root->data;
         left =  findMax(root->left);
         right = findMax(root->right);
    }
    if(left> right)
        max = left;
    else
        max = right;
        
    if(root_val>max)
         max =root_val;
}
