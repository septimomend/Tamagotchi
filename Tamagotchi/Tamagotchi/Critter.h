#include "stdafx.h"

class Critter
{
public:
	Critter(int hunger = 0, int boredom = 0); //cnstr with hunger and boredom level of critter
	void Talk(); //function for feedback to critter
	void Eat(int food = 4); //feed critter
	void Play(int fun = 4); //play with critter;
	int GetHunger() const;
	int GetBoredom() const;
private:
	int m_Hunger; // hunger
	int m_Boredom; // and boredom of object
	int GetMood() const; // critter's mood function that returns value comparable with hunger and boredom level
	void PassTime(int time = 1); // time that determines the increase in hunger and boredom
};
