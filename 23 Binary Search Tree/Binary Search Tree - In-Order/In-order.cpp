#include <iostream>
using namespace std;

struct Node {

	int data;
	Node *left;
	Node *right;

};


Node *root = NULL;


Node *createNewNode(int newData) {

	Node *newNode = new Node;
	newNode->left = NULL;
	newNode->right = NULL;

	return newNode;

}


// In-order traversal binary search tree
void inOrder(Node *root) {

	if (root == NULL)
		return;

	inOrder(root->left);  // Traversing the left subtree.
	cout << root->data << ", ";
	inOrder(root->right); // Traversing the right subtree.

}


void insert(Node *node, int newData) {

	if (root == NULL) {
		root = new Node;
	}
}


int main() {


}