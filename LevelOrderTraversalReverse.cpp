// Motive:
//         1
//        /  \
//       2    3
//     / \   / \
//    4   5  6  7
//  for above tree output should be: 4 5 6 7 2 3 1
//
// Hint: do a level order traversal and use stack to store node data, 
// printing this stack will print node is reverse order.

void LevelOrderTraversalReverse(struct BinaryTreeNode *root)
{
     struct BinaryTreeNode *temp_node=NULL;
     struct Queue* to_traverse_Q=CreateQueue();
     struct Stack* to_print_stack=CreateStack();
     if(!root)
        return;
     EnQueue(to_traverse_Q, root);
     while(!IsQueueEmpty())
     {
         temp_node = DeQueue(to_traverse_Q);
         if(!temp_node->left)
             EnQueue(to_traverse_Q, temp_node->left);
         if(!temp_node->right)
             EnQueue(to_traverse_Q, temp_node->right);  
         Push(to_print_stack, temp_node);
     }
     while(!IsStackEmpty())
          printf("%d ", Pop(to_print_stack)->data);
}


// time complexity O(n) space complexity O(n)
