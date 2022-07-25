#include <bits-stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;

	Node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};
int Array[100];
void PreOrder(Node *root, int *index)
{
	if (root == NULL)
	{
		return;
	}
	Array[*index] = root->data;
	*index = *index + 1;
	PreOrder(root->left, index);
	PreOrder(root->right, index);
}
Node *constructBST(int *index, int low, int high, int size)
{
	if (*index >= size || low > high)
	{
		return NULL;
	}
	Node *root = new Node(Array[*index]);
	*index = *index + 1;
	if (low == high)
	{
		return root;
	}
	int i;
	for (int i = low; i <= high; ++i)
	{
		if (Array[i] > root->data)
		{
			break;
		}
	}
	root->left = constructBST(index, *index, i - 1, size);
	root->right = constructBST(index, i, high, size);

	return root;
}
Node *constructTree(int i)
{
	int index = 0;
	return constructBST(&index, 0, i - 1, i);
}
void Inorder(Node *root)
{
	if (root == NULL)
	{
		return;
	}
	Inorder(root->left);
	cout << root->data << "\t";
	Inorder(root->right);
}
int main()
{
	//Create Binary Tree
	Node *root;
	root = new Node(10);
	root->left = new Node(5);
	root->right = new Node(40);
	root->left->left = new Node(1);
	root->left->right = new Node(7);
	root->right->right = new Node(50);

	int index = 0;
	PreOrder(root, &index);

	for (int i = 0; i < index; ++i)
	{
		cout << Array[i] << "\t";
	}
	cout << endl;
	Node *BST = constructTree(index);
	Inorder(BST);
	return 0;
}

/*

		10
		/\
	   5 40
	  /\  \
	 1  7 50


		10
		/\
		 20
		  \
		  40
		  /	\
		 30 50
		 	 \
			 60
*/