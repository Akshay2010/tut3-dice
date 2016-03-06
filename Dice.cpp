#include<iostream>
#include<stdio.h>
#include"Dice.h"
#include<stdlib.h>
#include<time.h>

using namespace std;

Dice::Dice()
{
	CurrentRoll=0;
	RollCount=0;
	SigmaRolls=0;
	Avg=0;
}

void Dice::SetRollCount()
{
	RollCount = RollCount + 1;
}



int Dice::getRollCount()
{
	return RollCount;
}

void Dice::SetCurrentRoll(int x)
{
	CurrentRoll=x;

}

int Dice::Roll()
{
	SetCurrentRoll(oneToSix());
	SetRollCount();
	setSigmaRolls(getCurrentRoll());
	return getCurrentRoll();
}

int Dice::oneToSix()

{
	return (1 + rand()%5);								//

}

void Dice::printDiceStats()
{
	cout<<"Current Roll:"<<getCurrentRoll()<<endl;
	cout<<"Dice Statistics after "<<getRollCount()<<"!"<<endl;
	cout<<"Roll Counts :"<<getRollCount()<<endl;
	cout<<"Average number rolled:"<<getAverage()<<endl;
	
}

int RandomSix()
{
	srand(time(NULL));
	return (1 + rand()%5);
}

int Dice::getCurrentRoll()
{
	return CurrentRoll;
}

void Dice::setSigmaRolls(int x)
{
	SigmaRolls=x+SigmaRolls;
}

void Dice::Average()
{
	Avg=getSigmaRolls()/getRollCount();
}

float Dice::getSigmaRolls()
{
	return SigmaRolls;
}

float Dice::getAverage()
{
	return Avg;
}

float Average(int n,int s[])
{
	int x;
	float Total=0;
	
	for(x=0;x<n;x++)
	{
		Total=Total+s[x];
	}

	return (Total/n);
}