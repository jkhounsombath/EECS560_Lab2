#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "linked_list.h"

class hashTable
{
	private:
		linkedList<player>* playerBucket= nullptr;
		int bucketSize= 5;
	public:
		hashTable();
		~hashTable();
		int hashFunc(int goalCount, int bucketSize);
		void removePlayer(std::string playerName, int goalCount);
		void addPlayer(std::string playerName, int goalCount);
		void printPlayerList();
		void playerWithGoalCountEqualTo(int goals);
		void playerWithGoalCountGreaterThan(int goals);
		void PlayerWithGoalCountLessThan(int goals);
};
#endif
