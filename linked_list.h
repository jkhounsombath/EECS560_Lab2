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
		void removeHelper(std::string name);
		bool findName(std::string name);
		void printList();
		void playerWithGoalCountEqualToHelper(int goals);
		void playerWithGoalCountGreaterThanHelper(int goals);
		void PlayerWithGoalCountLessThanHelper(int goals);
};
#include "linked_list.cpp"
#endif
