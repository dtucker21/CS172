#include "stdafx.h"
#include <iostream>
#include "Course.h"

using namespace std;

Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}


Course::~Course()
{
	delete[] students;
	students = NULL;
}

string Course::getCourseName() const
{
	return courseName;
}

void Course::addStudent(const string& name)
{
	//PT -- need to make sure you have enough room for the new student.
	//      if you don't, you need to increase the capacity of students[]
	//  -2
	students[numberOfStudents] = name;
	numberOfStudents++;
}

//PT -- you don't need size here. You have numberOfStudents
void Course::dropStudent(const string& name, int size)
{
	for (int j = 0; j < size; j++)
	{
		if (students[j] == name)
		{
			students[j] = "";
		}
	}
}

void Course::clear()
{
	//PT -- numberOfStudents = 0;
	//      capacity = 1;
	delete[] students;
	students = new string[1];
}

string* Course::getStudents() const
{
	return students;
}

int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}
