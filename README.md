Introduction To Binary Trees [1]
----------------------------
Binary tree is made of nodes, each node points to a left node, right node, and a data element.
- Root is topmost node in tree
- left and right point recursively point to smaller 'subtrees' on either side
- leaf are the nodes that don't have any children
example:

          1                     top most node with element 1 is node
        /   \                   
       2     3
     /  \
    4    5                       4 and 5 are leaves
   
   
Typical Binary Tree Code in C/C++
In C or C++, the binary tree is built with a structure type to store pointer value of left node, right node, and data element. This structure typically looks like below:

struct node { 
    int data; 
    struct node* left; 
    struct node* right; 
} 



reference:
1# http://cslibrary.stanford.edu/110/BinaryTrees.html 
 
