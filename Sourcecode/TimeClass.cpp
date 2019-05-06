#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
	// Create two objects of time
	Time firstTime(13, 55, 24);
	Time secondTime(2, 5, 18);

	// Print times
	cout << "First time: ";
	firstTime.print();
	cout << endl << "Second time: ";
	secondTime.print();

	// Add and subtract times
	cout << endl << "First + second time: ";
	(firstTime + secondTime).print();
	cout << endl << "First - second time: ";
	(firstTime - secondTime).print();

	// Check if they are equal
	cout << endl << "Is firstTime == firstTime: " << (firstTime == firstTime) << endl;
	cout << "Is firstTime == secondTime: " << (firstTime == secondTime) << endl;
}