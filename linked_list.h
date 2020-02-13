#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
#include <stdexcept>

#include "node.h"
#include "player.h"

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
		bool findName(std::string name);
		void printList();
		void playerWithGoalCountEqualTo(int goals);
		void playerWithGoalCountGreaterThan(int goals);
		void PlayerWithGoalCountLessthan(int goals);
};
#include "linked_list.cpp"
#endif
