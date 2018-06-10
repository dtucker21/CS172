﻿// EX04_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

// 17/20

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
	
	//PT -- copy the numbers over
	// -3
	/*
	for (int i=0; i<size; i++) {
		newArray[i] = list[i];
	}
	*/
	
	return newArray;
	
	//PT -- this code will never run since return gets you out of the function.
	//      do this in main() instead;
	delete newArray;
	newArray = NULL;
}
