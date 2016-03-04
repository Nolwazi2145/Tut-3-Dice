#include "Dice.h"
#include<iostream>
using namespace std;

Dice::Dice()
{
	 
}


int Dice::roll()
{
	int Random_;
	Random_ = (rand() % 6) + 1;
	return Random_;
}

float Dice::avarage(Dice Die, int RNum)
{
	int R = 0;  //holds randomly generated numbers
	for (int i = 0; i < RNum; ++i)
	{
		R += Die.roll();
	}

	return R / RNum;

}

float Dice::average(int Rolls[], int RNum)
{
	int R = 0;

	for (int i = 0; i < RNum; ++i)
	{
		Rolls[i] = roll();
		R += Rolls[i];
	}

	return R / RNum;

}

Dice::~Dice()
{
}
