//Michael Drummond
//Guess answer algorithm
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//Changes random value each second
	srand(time(0));
	int compGuess = rand() % 20;

	cout << "Do not input any values (press enter to continue)";
	cin.get();
	cout << "Think of a number (press enter)";
	cin.get();
	cout << "Now multiple it by 2 (press enter)";
	cin.get();
	//Multiple computer guess by two to avoid addition of a odd number
	cout << "Now Add " << compGuess *2 << " (press enter)";
	cin.get();
	cout << "Now Divide it by 2 (press enter)";
	cin.get();
	cout << "Now subtract the first number you thought of (press enter)";
	cin.get();
	cout << "Your answer should be.......drum roll please....(press enter)";
	cin.get();
	cout << compGuess;
	cin.get();
	return 0;
}
