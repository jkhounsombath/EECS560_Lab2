#include "Executive.h"

Executive::Executive(std::string fileName)
{
	std::ifstream inFile (fileName);
	std::string tempName;
	int tempGoals= 0;
	while(inFile>>tempName)
	{
		inFile>>tempGoals;
		HashTable.addPlayer(tempName, tempGoals);
	}
	HashTable.printPlayerList();
}

Executive::~Executive()
{

}

void Executive::run()
{
	int choice;
	std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	std::cout<<"WELCOME TO JUSTIN'S HASH TABLE 560 LAB\n";
	std::cout <<"-----------------------------------------------\n\n\n";
	do
	{
		std::cout<<"Pick a number:\n";
		std::cout <<"-----------------------------------------------\n";
		std::cout<<"1.) AddPlayer\n2.) RemovePlayer\n3.) PrintPlayerList\n4.) PlayersWithGoalCountEqualTo(g)\n5.) PlayersWithNumGoalsGreaterThan(h)\n6.) PlayersWithNumGoalsLessThan(i)\n7.) Exit\n";
		std::cout <<"-----------------------------------------------\nChoice: ";
		std::cin>>choice;
		std::cout<<"\n\n";
		if(choice == 1)
		{
			std::string tempName;
			int tempGoals= 0;
			std::cout<<"What player would you like to add: ";
			std::cin>>tempName;
			tempName.append(":");
			std::cout<<"How many goals has he/she scored: ";
			std::cin>>tempGoals;
			HashTable.addPlayer(tempName, tempGoals);
		}
		else if(choice == 2)
		{
			std::string tempName;
			int tempGoals= 0;
			std::cout<<"What player would you like to remove: ";
			std::cin>>tempName;
			tempName.append(":");
			std::cout<<"How many goals has he/she scored: ";
			std::cin>>tempGoals;
			HashTable.removePlayer(tempName, tempGoals);
		}
		else if(choice == 3)
		{
			HashTable.printPlayerList();
		}
		else if(choice == 4)
		{
			int tempGoals= 0;
			std::cout<<"Enter how many goals the player(s) scored: ";
			std::cin>>tempGoals;
			HashTable.playerWithGoalCountEqualTo(tempGoals);
		}
		else if(choice == 5)
		{
			int tempGoals= 0;
			std::cout<<"Enter the minimum goals the player(s) scored: ";
			std::cin>>tempGoals;
			HashTable.playerWithGoalCountGreaterThan(tempGoals);
		
		}
		else if(choice == 6)
		{
			int tempGoals= 0;
			std::cout<<"Enter the maximum goals the player(s) scored: ";
			std::cin>>tempGoals;
			HashTable.PlayerWithGoalCountLessThan(tempGoals);
		}
		else if(choice == 7)
		{
			std::cout<<"Goodbye!\n";
		}
		else
		{
			std::cout<<"Invalid choice (must be 1-7)\n";
		}
		std::cout <<"-----------------------------------------------\n\n\n";
	}while(choice != 7);
}

