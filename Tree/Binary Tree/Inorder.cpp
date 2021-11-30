#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *left = NULL;
	Node *right = NULL;
	Node(int d)
	{
		data = d;
	}
};

void inOrder(Node *root)
{
	if (root == NULL)
		return;
	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}
/*
	1
      /  \
     2    3
    / \  / \
   4   5 6 7
*/
int main()
{
	Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);
	inOrder(root);
	return 0;
}