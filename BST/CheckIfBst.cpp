//A binary search tree (BST) is a node based binary tree data structure which has the following properties. [1]
// - The left subtree of a node contains only nodes with keys less than the node’s key.
// - The right subtree of a node contains only nodes with keys greater than the node’s key.
// - Both the left and right subtrees must also be binary search trees.
// 
// From the above properties it naturally follows that:
// - Each node (item in the tree) has a distinct key.
//
//   example of binary tree: 
//                              4
//                            /   \
//                          2      5 
//                        /   \
//                       1     3
//
// reference# https://www.geeksforgeeks.org/a-program-to-check-if-a-binary-tree-is-bst-or-not/
//
// While doing In-Order traversal, we can keep track of previously visited node. 
// If the value of the currently visited node is less than the previous value, then tree is not BST. 

bool isBST(struct node* root)
{
    node* prev;
    if(root)
    {
        if(!root->left)
            return false;
            
         // Allows only distinct valued nodes 
        if (prev!=NULL && root->data <= prev->data)
            return false;
        
        prev = root;
        
        return (!isBST(root->right));        
     }
    return true;
}

Time Complexity: O(n), Space Complexity O(n)
