#include "hashTable.h"

hashTable::hashTable()
{
	playerBucket= new linkedList<player>[bucketSize];
}

hashTable::~hashTable()
{
	delete[] playerBucket;
}

int hashTable::hashFunc(int goalCount, int tempBucketSize)
{
	return(goalCount % bucketSize);
}

void hashTable::removePlayer(std::string playerName, int goalCount)
{
	int tempIndex= 0;
	tempIndex= hashFunc(goalCount, bucketSize);
	playerBucket[tempIndex].removeHelper(playerName);
}

void hashTable::addPlayer(std::string playerName, int goalCount)
{
	
	int tempIndex= 0;
	tempIndex= hashFunc(goalCount, bucketSize);
	player tempPlayer = player(playerName, goalCount);
	for(int i=0; i < bucketSize; i++)
	{
		if(playerBucket[i].findName(playerName) == true)
		{
			std::cout<<"Attempted to add" <<playerName<<" who is already in the hash Table.\n";
			return;
		}
	}
	playerBucket[tempIndex].insert(tempPlayer, playerBucket[tempIndex].getLength()+1);
	
}

void hashTable::printPlayerList()
{
	for(int i=0; i<bucketSize; i++)
	{
		std::cout<<"Bucket "<<i<<": ";
		playerBucket[i].printList();
		std::cout<<std::endl;
	}
}

void hashTable::playerWithGoalCountEqualTo(int goals)
{
	int tempIndex=0;
	tempIndex= hashFunc(goals, bucketSize);
	playerBucket[tempIndex].playerWithGoalCountEqualToHelper(goals);
	std::cout<<"\n\n";
}

void hashTable::playerWithGoalCountGreaterThan(int goals)
{
	for(int i=0; i<bucketSize; i++)
	{
		playerBucket[i].playerWithGoalCountGreaterThanHelper(goals);
		std::cout<<std::endl;
	}
}

void hashTable::PlayerWithGoalCountLessThan(int goals)
{
	for(int i=0; i<bucketSize; i++)
	{
		playerBucket[i].PlayerWithGoalCountLessThanHelper(goals);
		std::cout<<std::endl;
	}
}

