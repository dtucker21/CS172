// EX05_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

template <typename T>
int isSorted(const T list[], int size);

int main()
{
	const int size = 5;
	int list[size];
	for (int i = 0; i < size; i++)
	{
		int input;
		cout << "Please enter an integer: ";
		cin >> input;
		list[i] = input;
	}
	int sort = isSorted(list, size);
	if (sort == 0)
	{
		cout << "The array is not in order." << endl;
	}
	else if (sort == 1)
	{
		cout << "The array is in order." << endl;
	}
    return 0;
}

template <typename T>
int isSorted(const T list[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (list[i] > list[i + 1])
		{
			return 0;
		}
		else if (i = size && list[0] < list[1] && list[1] < list[2] && list[2] < list[3] && list[3] < list[4])
		{
			return 1;
		}
	}
}