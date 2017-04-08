#include "stdafx.h"
#include "Critter.h"

using namespace std;

Critter::Critter(int hunger, int boredom) : m_Hunger(hunger), m_Boredom(boredom) //cnstr
{
}

//return critter's mood level - hunger level + boredom level
inline int Critter::GetMood() const
{
	return (m_Hunger + m_Boredom);
}

// time that determines the increase in hunger and boredom
// in compatible with time hunger and boredom level will change
void Critter::PassTime(int time)
{
	m_Hunger += time;
	m_Boredom += time;
}

// function Talk() displays tamagotchi mood
// Talk() call function Get Mood() and in dependence by returned value 
// displays a message containing critter's mood. 
// After that function Talk() call function PassTime() for time move modeling
void Critter::Talk()
{
	std::cout << "I am a critter and I feel ";
	unsigned int mood = GetMood();
	if (mood > 15)
	{
		cout << "mad." << endl;
	}
	else if (mood > 10)
	{
		cout << "frustrated." << endl;
	}
	else if (mood > 5)
	{
		cout << "okay." << endl;
	}
	else
	{
		cout << "happy." << endl;
	}
	PassTime();
}

// function Eat() reduce hunger level on 'food' value (default food is 4)
// and hunger level can't be below zero
void Critter::Eat(int food)
{
	cout << "Brruppp." << endl;
	m_Hunger -= food;
	if (m_Hunger < 0)
	{
		m_Hunger = 0;
	}
	PassTime();
}

// function Play() reduce boredom level on 'fun' value (default fun is 4)
// and boredom level can't be below zero
void Critter::Play(int fun)
{
	cout << "Wheee!" << endl;
	m_Boredom -= fun;
	while (m_Boredom < 0)
	{
		m_Boredom = 0;
	}
	PassTime();
}