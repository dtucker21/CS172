// EX04_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int* doubleCapacity(const int* list, int size);

int main()
{
	const int* list = NULL;
	int size;
	cout << "Please enter the size of an array: ";
	cin >> size;
	list = new int[size];
	cout << doubleCapacity(list, size) << endl;
	delete list;
	list = NULL;
    return 0;
}

int* doubleCapacity(const int* list, int size)
{
	int* newArray = NULL;
	int newSize = size * 2;
	newArray = new int[newSize];
	return newArray;
	delete newArray;
	newArray = NULL;
}