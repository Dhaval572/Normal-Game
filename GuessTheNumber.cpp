#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int noOfGuess = 0;
	srand(time(0));
	int randNum = (rand() % 100) + 1;// generates random number
	int guessed;
	cout << "Guess the number:";
	do
	{
		cin >> guessed;
		noOfGuess++;
		if (guessed > randNum)
		{
			cout << "Enter lower number: \n";
		}
		else if (guessed < randNum)
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
