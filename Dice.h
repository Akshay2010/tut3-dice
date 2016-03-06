#ifndef Dice_H
#define Dice_H

class Dice
{
		private:
		
		int CurrentRoll;
		int RollCount;
		float SigmaRolls;
		float Avg;

		public:
		
		Dice();
		int getCurrentRoll();
		void SetCurrentRoll(int x);

		int getRollCount();
		void SetRollCount();

		int Roll();
		void setSigmaRolls(int x);
		float getSigmaRolls();
		int oneToSix();
		
		void Average();
		float getAverage();
		void printDiceStats();
};

#endif

float Average(int x,int s[]);
int RandomSix();
