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

}


int main() {


}