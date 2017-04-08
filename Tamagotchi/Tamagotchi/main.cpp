//"Tamagotchi" main.cpp
//this program is a simple game "Tamagotchi", where player is caretaker for critter
#include "stdafx.h"
#include "Critter.h"

using namespace std;

int main()
{
	cout << "\tWelcome to Tamagochi Console Game" << endl;

	cout << "\t\t        /\\  /\\" << endl;
	cout << "\t\t ---   < ^  ^ >" << endl;
	cout << "\t\t|Hi!|            " << endl;
	cout << "\t\t ---" << endl;

	cout << "...you are my caretaker now. ";
	Critter crit; //instance a new object and default hunger/boredom level is 0
	crit.Talk();
	int choice;
	cout << "You can do these actions:" << endl;
	cout << "0 - Quit" << endl;
	cout << "1 - Listen to critter" << endl;
	cout << "2 - Feed critter" << endl;
	cout << "3 - Play with critter" << endl;
	// main cycle
	// all actions of player calls some function
	do
	{
		cout << "Choice: ";
		cin >> choice;
		switch (choice)
		{
		case 0:
			cout << "I can die if you will forget for me:(" << endl;
			break;
		case 1:
			crit.Talk(); //calling funcion Talk()
			break;
		case 2:
			crit.Eat(); //calling funcion Eat()
			break;
		case 3:
			crit.Play(); //calling funcion Play()
			break;
		default:
			cout << "Sorry, but " << choice << " isn't a valid choice." << endl;
		}
	} while (choice != 0);
	return 0;
}
