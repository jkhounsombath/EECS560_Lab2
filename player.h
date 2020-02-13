#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

class player
{
	private:
		std::string m_name;
		int m_goals= 0;
	public:
		player();
		player(std::string name, int goals);
		~player();
		void setGoals(int goals);
		int getGoals();
		void setName(std::string name);
		std::string getName();
};
#endif

