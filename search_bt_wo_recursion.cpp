int search_bt_wo_recursion( struct binaryNode* root, int data)
{
    struct binaryNode* temp;
    struct Queue* Q;
    if(!root)
       return -1;
    Q = CreateQueue();
    EnQueue(Q, root);
    while(!IsEmptyQueue(Q))
    {
         temp=DeQueue(Q);
         if(data == root->data)
              return true;
         if(temp->left)
              EnQueue(Q, root->left);
         if(temp->right)
              EnQueue(Q, root->right);
    }
    DeleteQueue(Q);
    return 0;
}
