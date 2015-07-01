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
	cout << "Think of a number";
	cin.get();
	cout << "X 2";
	cin.get();
	//Multiple computer guess by two to avoid addition of a odd number
	cout << "+ " << compGuess *2;
	cin.get();
	cout << "Now Divide it by 2";
	cin.get();
	cout << "Now subtract the first number you thought of";
	cin.get();
	cout << "Your answer should be.......drum roll please....";
	cin.get();
	cout << compGuess;
	cin.get();
	return 0;
}
