#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
	int val;
	struct Node *left;
	struct Node *right;
};

void insert(int val, struct Node **root)
{

	if ((*root) == NULL)
	{
		(*root) = (struct Node *)malloc(sizeof(struct Node));
		(*root)->val = val;
		(*root)->left = NULL;
		(*root)->right = NULL;
	}
	else if ((*root)->val == val)
	{
		return;
	}
	else if (val < (*root)->val)
	{
		insert(val, &(*root)->left);
	}
	else
	{

		insert(val, &(*root)->right);
	}
}

void inorder(struct Node *root)
{
	if (!root)
	{
		return;
	}
	inorder(root->left);
	printf("%d\t", root->val);
	inorder(root->right);
}
void postOrder(struct Node *root)
{
	if (!root)
	{
		return;
	}
	postOrder(root->left);
	postOrder(root->right);

	printf("%d\t", root->val);
}
void preOrder(struct Node *root)
{
	if (!root)
	{
		return;
	}
	printf("%d\t", root->val);
	preOrder(root->left);
	preOrder(root->right);
}

struct Node *inorderSucc(struct Node *root)
{
	struct Node *curr = root;
	while (!curr && !curr->left)
	{
		curr = curr->left;
	}
	return curr;
}
struct Node *deleteNode(struct Node *root, int key)
{
	if (key < root->val)
	{
		root->left = deleteNode(root->left, key);
	}
	else if (key > root->val)
	{
		root->right = deleteNode(root->right, key);
	}
	else
	{
		if (root->left == NULL)
		{
			struct Node *temp = root->right;
			free(root);
			return temp;
		}
		else if (root->right == NULL)
		{
			struct Node *temp = root->left;
			free(root);
			return temp;
		}

		struct Node *temp = inorderSucc(root->right);
		root->val = temp->val;
		root->right = deleteNode(root->right, temp->val);
	}
}

int main()
{

	/*
			10
		   /  \
		  5    20
		 /	   / \
		2	  15 30
	*/
	struct Node *root = NULL;
	insert(10, &root);
	insert(5, &root);
	insert(20, &root);
	insert(2, &root);
	insert(30, &root);
	insert(15, &root);

	deleteNode(root, 20);
	inorder(root);
	printf("\n");
	preOrder(root);
	printf("\n");
	postOrder(root);
	printf("\n");

	return 0;
}