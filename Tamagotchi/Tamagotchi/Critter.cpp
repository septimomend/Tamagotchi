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
	unsigned int hunger = GetHunger();
	if (mood > 15)
	{
		cout << "mad. " << endl;
	}
	else if (mood > 12)
	{
		cout << "very bad. ";
	}
	else if (mood > 10)
	{
		cout << "frustrated. ";
	}
	else if (mood > 7)
	{
		cout << "worry. ";
	}
	else if (mood > 5)
	{
		cout << "okay. ";
	}
	else if (mood > 2)
	{
		cout << "good. ";
	}
	else
	{
		cout << "happy. I am satisfied." << endl;
	}
	if (hunger > 15 && mood > 15)
	{
		cout << "You forget about me! You a horrible caretaker! I will die through hunger and then I will kill you!" << endl;
	}
	else if (hunger > 10)
	{
		cout << "I am very-very hungry! Give me food! Please!" << endl;
	}
	else if (hunger > 7)
	{
		cout << "I begin to starve. Feed me." << endl;
	}
	else if (hunger > 5)
	{
		cout << "I am not very hungry, but would not refuse from cookies." << endl;
	}
	else if (hunger > 2)
	{
		cout << "I am not hungry. Lets play?" << endl;
	}
	else
	{
		cout << "I don't feel hungry. You are the best caretaker in world!" << endl;
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

int Critter::GetHunger() const
{
	return m_Hunger;
}

int Critter::GetBoredom() const
{
	return m_Boredom;
}