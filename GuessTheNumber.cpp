#include <iostream>
#include <ctime> // For use srand()
using namespace std;

int main()
{
	int noOfGuess = 0;
	srand(time(0));
	int randNum = (rand() % 100) + 1; // generates random number
	int guessed;
	cout << "Guess the number(Between 1 to 100): ";
	do
	{
		cin >> guessed;
		noOfGuess++;
		if (guessed > randNum) // Checking that number is bigger than random number
		{
			cout << "Enter lower number: \n";
		}
		else if (guessed < randNum) // Checking that number is smaller than random number
		{
			cout << "Enter higher number: \n";
		}
		else
		{
			cout << "Congratulations! you gussed number in (" << noOfGuess << ") gusses";
		}
	} while (guessed != randNum);
	return 0;
}
