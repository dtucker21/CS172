// EX03_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class EvenNumber
{
public:
	int number;

	int getValue() { return number; }
	int getNext() { return number + 2; }
	int getPrevious() { return number - 2; }

	EvenNumber()
	{
		number = 0;
	}
	EvenNumber(int a)
	{
		if (a % 2 == 0)
		{
			number = a;
			int value = getValue();
			cout << value << " is the number in the class EvenNumber." << endl;
			int next = getNext();
			cout << next << " is the even number after " << value << endl;
			int previous = getPrevious();
			cout << previous << " is the even number before " << value << endl;
		}
		else if (a % 2 == 1)
			cout << "It appears you have entered an odd number." << endl;
		else
			cout << "I'm not sure if you know what a number even is." << endl;
	}
};

int main()
{
	int b;
	cout << "Please enter an even number:";
	cin >> b;
	EvenNumber::EvenNumber(b);
	return 0;
}