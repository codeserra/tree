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
