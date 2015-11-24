/*
 * List.hpp
 *
 *  Created on: Nov 4, 2015
 *      Author: karl
 */

#ifndef LIST_HPP_
#define LIST_HPP_

class List {
	struct Node {
		int payload;
		Node* next;
		Node(int p, Node* n=nullptr) : payload{p}, next{n} {}
	};
	Node * first = nullptr;
public:
	List() =  default;

	void put(int x) {
		Node* n = new Node(x, first );
		first = n;
	}

	int get() {
		Node *n = first;
		int val = n->payload;
		first = first->next;
		delete n;
		return val;
	}

	bool empty() const {return first == nullptr;}

};



#endif /* LIST_HPP_ */
