﻿// EX04_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Course.h"
#include "Course.cpp"

// (-2 in course.cpp)
// (-5 for being late)
// 13/20

using namespace std;

int* increaseCapacity(const int* list, int size);

int main()
{
	cout << "Please enter the name of the course and the capacity: ";
	int capacity;
	string courseName;
	cin >> capacity >> courseName;
	Course course1(courseName, capacity);
	
	//PT -- instead of all of this, put students into your Course object and try it out.
	
	const int* list = NULL;
	const string name = "Bob Jones";
	int Csize;
	cout << "Please enter the number of students: ";
	cin >> Csize;
	list = new int[Csize];
	cout << increaseCapacity(list, Csize) << endl;
	delete list;
	list = NULL;
	return 0;
}

int* increaseCapacity(const int* list, int size)
{
	int* newArray = NULL;
	int newSize = size + 1;
	newArray = new int[newSize];
	return newArray;
	delete newArray;
	newArray = NULL;
}
