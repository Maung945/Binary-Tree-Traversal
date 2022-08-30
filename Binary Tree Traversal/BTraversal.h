/*
* Binary Tree Creation and Traversal.
* BTraversal.h
* Myo Aung
*/
#include "Node.h"
#include <iostream>
#include <queue>
using namespace std;

class BTraversal {
private:
	Node* root;

public:
	BTraversal();
	Node* getRoot();
	void in_display(Node* p);
	void pre_display(Node* p);
	void post_display(Node* p);
	void BFS_traversal(Node* p);
	Node* newNode(int e, Node* p);
	Node* insert(int key, Node* p);

};

BTraversal::BTraversal() : root(nullptr) {}

Node* BTraversal::getRoot() {
	return root;
}

Node* BTraversal::newNode(int e, Node* p) {
	p = new Node();
	p->data = e;
	p->left = p->right = nullptr;
	return p;
}

Node* BTraversal::insert(int key, Node* p) {
	if (p == nullptr) {
		Node* temp = newNode(key, p);
		root = temp;
		return temp;
	}
	if (key < p->data) {
		p->left = insert(key, p->left);
	}
	else if (key > p->data) {
		p->right = insert(key, p->right);
	}
	root = p;
	return p;
}

void BTraversal::in_display(Node* p) {
	if(p) {
		in_display(p->left);
		cout << p->data << " ";
		in_display(p->right);
	}
}

void BTraversal::pre_display(Node* p) {
	if (p) {
		cout << p->data << " ";
		pre_display(p->left);
		pre_display(p->right);
	}
}

void BTraversal::post_display(Node* p) {
	if (p) {
		post_display(p->left);
		post_display(p->right);
		cout << p->data << " ";
	}
}

void BTraversal::BFS_traversal(Node* p) {
	queue<Node*> Q;
	Q.push(p);

	if (p == nullptr) {
		return;
	}
	
	while(!Q.empty()) {
		cout << Q.front()->data << " ";
		if (Q.front()->left != nullptr) {
			Q.push(Q.front()->left);
		}
		if (Q.front()->right != nullptr) {
			Q.push(Q.front()->right);
		}
		Q.pop();
	}
}
