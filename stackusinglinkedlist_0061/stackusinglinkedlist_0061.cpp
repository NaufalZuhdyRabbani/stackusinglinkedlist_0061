#include <iostream>

using namespace std;

//Node class representing a single node in the linked list
class Node {
public:
	int data;
	Node* next;

	Node() {
		next = NULL;
	}
};

// stack class
class Stack {
private:
	Node* top; // Pointer to the top node of the stack

public:
	Stack() {
		top = NULL; // initailize the stack with null top pointer
	}

	//Push operation : Insert an element onto the top of the stack
	int push(int value) {
		Node* newNode = new Node(); // 1. Allocate memory for the new node
		newNode->data = value; // 2. assign value
		newNode->next = top; // 3.set the next pointer of the new node to the curent top node
		top = newNode; // 4. Update the top pointer to the new node
	}
};