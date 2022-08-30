/*
* Binary Tree Creation and Traversal.
* Node.h
* Myo Aung
*/
class Node {
 public:
	int data;
	Node* left;
	Node* right;
	Node();
};

Node::Node() : data(0), left(nullptr), right(nullptr) {}
