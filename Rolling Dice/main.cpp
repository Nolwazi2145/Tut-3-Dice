#include <iostream>
#include "Dice.h"

using namespace std;

int main()
{
	Dice Die,Die2;

	int Roll_Num;
	cout << "ENTER NUMBER OF ROLLS!!" << endl << endl;
	cin >> Roll_Num;

	int *NRolls = new int[Roll_Num];
	
	cout << "First test" << endl;
	cout << Die.avarage(Die2, Roll_Num) << endl;

	cout << "\nSecond test" << endl;
	cout << Die.average(NRolls, Roll_Num) <<endl;

	delete NRolls;

}