/*
* Binary Tree Creation and Traversal.
* Main.cpp
* Myo Aung
*/

#include "BTraversal.h"

int main() {
	BTraversal BT;
	BT.insert(7, BT.getRoot());
	BT.insert(5, BT.getRoot());
	BT.insert(11, BT.getRoot());
	BT.insert(2, BT.getRoot());
	BT.insert(3, BT.getRoot());
	BT.insert(1, BT.getRoot());
	BT.insert(6, BT.getRoot());
	BT.insert(10, BT.getRoot());
	BT.insert(12, BT.getRoot());
	BT.insert(9, BT.getRoot());
	BT.insert(8, BT.getRoot());
	cout << "In-Order Traversal: ";
	BT.in_display(BT.getRoot());
	cout << endl << "Pre-Order Traversal: ";
	BT.pre_display(BT.getRoot());
	cout << endl << "Post-Order Traversal: ";
	BT.post_display(BT.getRoot());
	cout << endl;
	cout << "Breath Frist Search, Level Order Traversal: ";
	BT.BFS_traversal(BT.getRoot());
	return 0;
}