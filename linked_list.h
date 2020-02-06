#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
#include <stdexcept>

#include "node.h"

template <typename T>
class linkedList
{
	private:
		Node<T>* m_front;
	
	public:
		linkedList();
		~linkedList();
		bool isEmpty() const;
		int getLength() const;
		void insert(T newEntry, int index);
		void removeFromList(T value);
		void remove(int index);
		void deleteDuplicates();
		bool find(T value);
		void FindNext(T value);
		void print();
};
#include "linked_list.cpp"
#endif
