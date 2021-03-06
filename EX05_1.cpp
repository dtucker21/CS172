// EX05_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

template <typename T>
int linearSearch(const T list[], T key, int arraySize);

int main()
{
	const int size = 10;
	int list[size];
	for (int i = 0; i < size; i++)
	{
		int input;
		cout << "Enter an integer: ";
		cin >> input;
		list[i] = input;
	}
	double list2[size];
	for (int i = 0; i < size; i++)
	{
		double input;
		cout << "Enter a double: ";
		cin >> input;
		list2[i] = input;
	}
	string list3[size];
	for (int i = 0; i < size; i++)
	{
		string input;
		cout << "Enter a string: ";
		getline(cin, input);
		list3[i] = input;
	}
	int keyInt;
	double keyDouble;
	string keyString;
	cout << "What integer do you want to look for in the array? ";
	cin >> keyInt;
	int location = linearSearch(list, keyInt, size);
	if (location >= 0)
	{
		cout << "I found your int at " << location << endl;
	}
	else
	{
		cout << "I couldn't find your int in the array." << endl;
	}
	cout << "What double do you want to look for in the array? ";
	cin >> keyDouble;
	int location2 = linearSearch(list2, keyDouble, size);
	if (location2 >= 0)
	{
		cout << "I found your double at " << location2 << endl;
	}
	else
	{
		cout << "I couldn't find your double in the array." << endl;
	}
	cout << "What string do you want to look for in the array? ";
	cin >> keyString;
	int location3 = linearSearch(list3, keyString, size);
	if (location3 >= 0)
	{
		cout << "I found your string at " << location3 << endl;
	}
	else
	{
		cout << "I couldn't find your string in the array." << endl;
	}
	return 0;
}

template <typename T>
int linearSearch(const T list[], T key, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
			return i;
	}
	return -1;
}