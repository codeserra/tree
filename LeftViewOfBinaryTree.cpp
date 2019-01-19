struct BTNode {
	int data;
	// struct binaryTreeNode * left, right
	unique_ptr< BTNode > left, right;
};

// create new node
unique_ptr< BTNode > newBTNode(int data)
{
	auto temp = make_unique <BTNode>();
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}


// Use DFS, check height at each level, if it is first node encountered then print the node
void leftViewUtil(unique_ptr< BTNode > &root, int level, int* maxlevel)
{
	// base case
	if (root == NULL) return; 

	// if this is first level
	if (*maxlevel < level)
	{
		cout<< root->data <<" ";
		*maxlevel = level;
	}
	
	// call on left and right child
	leftViewUtil(root->left, level + 1, maxlevel);
	leftViewUtil(root->right, level + 1, maxlevel);
}


void leftView(unique_ptr< BTNode > &root)
{
	int maxlevel = 0; 
	leftViewUtil(root, 1, &maxlevel);
}

int main()
{
	auto root = newBTNode( 1);
	root->left = newBTNode(2);
	root->right = newBTNode(3);
	root->right->left = newBTNode(4);
	root->right->right= newBTNode(5);

	leftView(root);

	return 0; 
}
