#ifndef NODE_H
#define NODE_H

#include <iostream>

template <typename T>
class Node
{
	private:
		T m_entry;
		Node<T>* m_next= nullptr;

	public:
		/**
		* @post constructor
		**/
		Node();

		/**
		* @pre entry for a node
		* @post inserts a new node at a position with entry
		* @param entry: A new entry to put in the list
		**/
		Node(T entry);

		/**
		* @pre entry for a node
		* @post inserts a new node at a position with entry
		* @param entry: A new entry to put in the list
		* @param nextNode: pointer to nextNode
		**/
		Node(T entry, Node<T>* nextNode);

		/**
		* @post destructor
		**/
		~Node();

		/**
		* @pre entry for a node
		* @post sets the entry of a node
		* @param entry: the entry of a node
		**/
		void setEntry(T entry) ;

		/**
		* @post returns the value in a node
		**/
		T getEntry() const;

		/**
		* @post sets the nextNode
		* @param nextNode: pointer to nextNode
		**/
		void setNext(Node<T>* nextNode);

		/**
		* @post returns a ptr to the next node in a list
		**/
		Node<T>* getNext() const;
};
#include "node.cpp"
#endif
