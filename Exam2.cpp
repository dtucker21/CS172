// Exam2.cpp : Defines the entry point for the console application.
// I affirm that all code given below was written solely by me, Daniel Tucker, and that any help I received adhered to the rules stated for this exam. 

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include "Runner.h"
#include <vector>

using namespace std;

int main()
{
	string fname, lname;
	int pace1;
	cout << "Enter your first and last name, and planned pace per mile in seconds: ";
	cin >> fname >> lname >> pace1;
	Runner run1(fname, lname, pace1);
	Runner run2;
	string fname2, lname2;
	int pace2;
	cout << "Enter your first and last name, and planned pace per mile in seconds: ";
	cin >> fname2 >> lname2 >> pace2;
	run2.setFName(fname2);
	run2.setLName(lname2);
	run2.setPace(pace2);
	vector<string> FName;
	vector<string> LName;
	vector<int> Pace;
	FName[0] = run1.getFName();
	LName[0] = run1.getLName();
	Pace[0] = run1.getPace();
	FName[1] = run2.getFName();
	LName[1] = run2.getLName();
	Pace[1] = run2.getPace();
	for (int i = 0; i < FName.size(); i++)
	{
		if (Pace[i] > 0 && Pace[i] <= 360)
		{
			ofstream w;
			w.open("white.txt");
			if (w.fail())
			{
				cout << "Could not open white runner file." << endl;
			}
			else
			{
				w << FName[i] << " " << LName[i] << " " << Pace[i];
			}
		}
		else if (Pace[i] > 360 && Pace[i] <= 420)
		{
			ofstream y;
			y.open("yellow.txt");
			if (y.fail())
			{
				cout << "Could not open yellow runner file." << endl;
			}
			else
			{
				y << FName[i] << " " << LName[i] << " " << Pace[i];
			}
		}
		else if (Pace[i] > 420 && Pace[i] <= 480)
		{
			ofstream g;
			g.open("green.txt");
			if (g.fail())
			{
				cout << "Could not open green runner file." << endl;
			}
			else
			{
				g << FName[i] << " " << LName[i] << " " << Pace[i];
			}
		}
		else if (Pace[i] > 480 && Pace[i] <= 540)
		{
			ofstream o;
			o.open("orange.txt");
			if (o.fail())
			{
				cout << "Could not open orange runner file." << endl;
			}
			else
			{
				o << FName[i] << " " << LName[i] << " " << Pace[i];
			}
		}
		else if (Pace[i] > 540 && Pace[i] <= 600)
		{
			ofstream b;
			b.open("blue.txt");
			if (b.fail())
			{
				cout << "Could not open blue runner file." << endl;
			}
			else
			{
				b << FName[i] << " " << LName[i] << " " << Pace[i];
			}
		}
		else if (Pace[i] > 600 && Pace[i] <= 720)
		{
			ofstream l;
			l.open("lilac.txt");
			if (l.fail())
			{
				cout << "Could not open lilac runner file." << endl;
			}
			else
			{
				l << FName[i] << " " << LName[i] << " " << Pace[i];
			}
		}
		else if (Pace[i] > 720 && Pace[i] <= 1200)
		{
			ofstream r;
			r.open("red.txt");
			if (r.fail())
			{
				cout << "Could not open red runner file." << endl;
			}
			else
			{
				r << FName[i] << " " << LName[i] << " " << Pace[i];
			}
		}
		else
		{
			cout << "It appears " << FName[i] << " " << LName[i] << "'s expected mile pace is not between 0 seconds and 1200 seconds." << endl;
		}
	}
    return 0;
}

