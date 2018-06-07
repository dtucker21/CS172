// EX04_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int findSmall(int* a, int size);

int main()
{
	int* ptr = NULL;
	int size;
	cout << "Please enter the size of the array: ";
	cin >> size;
	ptr = new int[size];
	cout << "Please enter the values of the array: ";
	for (int i = 0; i < size; i++)
	{
		cin >> ptr[i];
	}
	cout << findSmall(ptr, size) << endl;
	delete ptr;
	ptr = NULL;
    return 0;
}

int findSmall(int* a, int size)
{
	int small = 1000000;
	int* smallptr = NULL;
	smallptr = &small;
	for (int i = 0; i < size; i++)
	{
		if (*smallptr > a[i])
		{
			*smallptr = a[i];
		}
		if (i == size)
		{
			return *smallptr;
		}
	}
}