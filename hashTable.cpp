#include "hashTable.h"

hashTable::hashTable()
{
	playerBucket= new linkedList<player>[bucketSize];
}

hashTable::~hashTable()
{

}

int hashTable::hashFunc(int goalCount, int tempBucketSize)
{
	return(goalCount % bucketSize);
}

void hashTable::removePlayer(std::string playerName, int goalCount)
{
	
}

void hashTable::addPlayer(std::string playerName, int goalCount)
{
	int tempIndex= 0;
	tempIndex= hashFunc(goalCount, bucketSize);
	player tempPlayer(playerName, goalCount);
	for(int i=0; i < bucketSize; i++)
	{
		if(playerBucket[i].findName(playerName))
		{
			std::cout<<"The player " <<playerName<<" is already in the hash Table.\n";
			return;
		}
	}
	playerBucket[tempIndex].insert(tempPlayer, playerBucket[tempIndex].getLength());
	
}

void hashTable::printPlayerList()
{
	
}

void hashTable::playerWithGoalCountEqualTo(int goals)
{

}

void hashTable::playerWithGoalCountGreaterThan(int goals)
{

}

void hashTable::PlayerWithGoalCountLessthan(int goals)
{

}
