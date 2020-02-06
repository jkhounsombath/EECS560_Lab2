#include "player.h"

player::player()
{
	m_goals=0;
}

player::player(std::string name, int goals)
{
	m_goals= goals;
	m_name= name;
}

player::~player()
{

}

void player::setGoals(int goals)
{
	m_goals= goals;
}

int player::getGoals()
{
	return m_goals;
}

void player::setName(std::string name)
{
	m_name = name;
}

std::string player::getName()
{
	return m_name;
}
