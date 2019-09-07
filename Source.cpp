#include <iostream>
#include <conio.h>

#define GStr "-"

using namespace std;

int main()
{
	/*
		1. Increment terbagi menjadi 2:
			# Post-Increment
			# Pre-Increment

		2. Decrement
			# Post-Decrement
			# Pre-Decrement
	*/

	int a = 5, b = 5;
	int i;

	//PostIncrement
	cout << a << endl;
	cout << a++ << endl;
	cout << a << "\n" << endl;

	//PreIncrement
	cout << b << endl;
	cout << ++b << endl;
	cout << b << "\n" << endl;

	for (i = 0; i < 15; i++)
	{
		cout << GStr;
	} cout << endl;

	//PostDecrement
	cout << a << endl;
	cout << a-- << endl;
	cout << a << "\n" << endl;

	//PreDecrement
	cout << b << endl;
	cout << --b << endl;
	cout << b << "\n" << endl;

	_getch();
	return 0;
}