// level order traversal is defined as follows
// visit root
// go to next level and visit all nodes at that level
// repeat until all levels are complete
// for a below tree level order traversal will be 1, 2, 3, 4, 5, 6, 7
//        1        
//      /   \                   
//     2      3
//    / \    / \
//   4   5  6   7

void  LevelOrder ( struct BinaryTreeNode* root
{
      struct BinaryTreeNode* temp;
      struct Queue* Q = CreateQueue();
      if(!root)
          return;
      EnQueue(Q,root);
      while(!IsEmptyQueue(Q))
      {
         temp =DeQueue(Q);
         // process current node
         if(temp->left)
             EnQueue(Q,temp->left);
         if(temp->right)
             EnQueue(Q,temp->right);
      }
      DeleteQueue(Q);
}
