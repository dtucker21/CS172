// EX04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	
	cout << "How many numbers will be in the array? ";
	int count;
	cin >> count;
	int* arrSize = NULL;
	arrSize = new int[count];
	for (int i = 0; i < count; i++)
	{
		cout << "Please enter the next number: ";
		cin >> arrSize[i];
	}
	delete[] arrSize;
	arrSize = NULL;
    return 0;
}

