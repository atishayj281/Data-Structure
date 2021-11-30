#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* left = NULL;
	Node* right = NULL;
	Node(int d){
		data = d;
	}
};

void flatten(Node* root){
	if(root == NULL || (root->left == NULL && root->right == NULL)){
		return;
	}
	if(root->left != NULL){
		flatten(root->left);
		Node* temp = root->right;
		root->right = root->left;
		root->left = NULL;

		Node* t = root->right;
		while(t->right != NULL){
			t = t->right;
		}
		t->right = temp;
	}
	flatten(root->right);
}

void rightView(Node* root){
	if(root == NULL) return;
	//rightView(root->left);
	cout<<root->data<<" ";
	rightView(root->right);
}

int main(){
	Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);
	//rightView(root);
	flatten(root);
	rightView(root);
	return 0;
}