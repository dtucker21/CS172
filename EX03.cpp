﻿// EX03.cpp : Defines the entry point for the console application.
//

#include<string>
#include<iostream>
#include "stdafx.h"

using namespace std;

class fan
{
public:
	//PT -- make these private. A user could set speed to 103, or radius to -3.1415, and that seems bad.
	int speed;
	bool on;
	double radius;
	
	//PT -- missing constructor.
	//  -3

	int getSpeed() { return speed; }
	bool getOn() { return on; }
	double getRadius() { return radius; }
	void setSpeed(int new_speed)
	{
		if (new_speed == 1 || new_speed == 2 || new_speed == 3)
			speed = new_speed;
	}
	void setOn(bool new_on)
	{
		//PT -- bools can only be true or false, so there's no need to check for that.
		if (new_on == true || new_on == false)
			on = new_on;
	}
	void setRadius(double new_radius)
	{
		if (new_radius > 0)
			radius = new_radius;
	}
};

int main()
{
	//PT -- You construct a fan, but don't do anything with it. -3
	fan();
	/*
	fan f;
	
	cout << "Fan: " << f.getSpeed() << ", " << f.getOn() << ", " << f.getRadius() << endl;
	*/
	{
		//PT -- these won't set the properties of the fan. They are just local variables.
		int speed = 1;
		bool on = false;
		double radius = 5;
	};
    return 0;
}

