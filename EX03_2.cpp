﻿// EX03_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <iostream>

// 18/20

using namespace std;

class QuadraticEquation
{
public:
	//PT -- make these private
	int a;
	int b;
	int c;

	int getA() { return a; }
	int getB() { return b; }
	int getC() { return c; }
	double getDiscriminant() { return b * b - 4 * a * c; }
	double getRoot1()
	{
		//PT -- should be a double, and call your function here.
		// double discrim = getDiscriminant();
		int discrim = b * b - 4 * a * c;
		if (discrim > 0)
		{
			//PT -- double r1 = 0;
			int r1 = 0;
			r1 = -b + sqrt(discrim);
			r1 = r1 / (2 * a);
			return r1;
		}
		else if (discrim = 0)
			return 0;
		else
			return -1;
	}
	double getRoot2()
	{
		//PT -- double
		int discrim = b * b - 4 * a * c;
		if (discrim > 0)
		{
			int r2 = 0;
			r2 = -b - sqrt(discrim);
			r2 = r2 / (2 * a);
			return r2;
		}
		//PT -- discrim == 0
		else if (discrim = 0)
			return 0;
		else
			return -1;
	}
	QuadraticEquation(int a, int b, int c)
	{
		//PT -- need to set your member variables here:
		// this->a = a;
		// this->b = b;
		// this->c = c;
		// -2
		
		//PT -- Also, in a constructor it's better practice to only initialize variables.
		//      wait for the user to ask for the roots.
		double r1 = getRoot1();
		double r2 = getRoot2();
		if (r1 < 0 && r2 < 0)
			cout << "The equation has no real roots" << endl;
		else if (r1 == 0 && r2 == 0)
			cout << "There is only one root and it is " << sqrt(a) << endl;
		else
			cout << r1 << " and " << r2 << " are the roots of this equation." << endl;
	}
};

int main()
{
	//PT -- Doubles would work better.
	int a, b, c;
	cout << "a(x^2) + b(x) + c" << endl;
	cout << "Enter the three coefficients of your quadratic equation." << endl;
	cin >> a >> b >> c;
	QuadraticEquation::QuadraticEquation(a, b, c);
    return 0;
}
