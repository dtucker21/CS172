// EX03_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

string sort(string &s);

int main()
{
	string s;
	cout << "Please enter a string" << endl;
	cin >> s;
	cout << sort(s);
    return 0;
}

string sort(string &s)
{
	for(int i = 0; i < 100; i++)
	{
		char first = 'Z';
		char firstLocation;
		for (int j = 0; j < 100; j++)
		{
			if (first > s[j])
			{
				first = s[j];
				firstLocation = j;
			}
		}
		if (firstLocation != i)
		{
			s[firstLocation] = s[i];
			s[i] = first;
		}
	}
	return s;
}