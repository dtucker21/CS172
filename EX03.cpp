// EX03.cpp : Defines the entry point for the console application.
//

#include<string>
#include<iostream>
#include "stdafx.h"

using namespace std;

class fan
{
public:
	int speed;
	bool on;
	double radius;

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
	fan();
	{
		int speed = 1;
		bool on = false;
		double radius = 5;
	};
    return 0;
}

