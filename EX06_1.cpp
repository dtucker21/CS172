// EX06_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	string filename;
	cout << "Enter the name of the text file you want to open or create: ";
	getline(cin, filename);
	ofstream file;
	file.open(filename);
	if (file.fail())
	{
		cout << "\nCould not find specified file. Creating " << filename << ".txt" << endl;
	}
	else
	{
		cout << "\nOpening " << filename;
	}
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		int a = rand() % 25; //Generate random integers to add to text file
		file << a << " ";
	}
	cout << "File operation successful." << endl;
	file.close();
    return 0;
}

