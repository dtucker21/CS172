// EX03_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <iostream>

using namespace std;

class QuadraticEquation
{
public:
	int a;
	int b;
	int c;

	int getA() { return a; }
	int getB() { return b; }
	int getC() { return c; }
	double getDiscriminant() { return b * b - 4 * a * c; }
	double getRoot1()
	{
		int discrim = b * b - 4 * a * c;
		if (discrim > 0)
		{
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
		int discrim = b * b - 4 * a * c;
		if (discrim > 0)
		{
			int r2 = 0;
			r2 = -b - sqrt(discrim);
			r2 = r2 / (2 * a);
			return r2;
		}
		else if (discrim = 0)
			return 0;
		else
			return -1;
	}
	QuadraticEquation(int a, int b, int c)
	{
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
	int a, b, c;
	cout << "a(x^2) + b(x) + c" << endl;
	cout << "Enter the three coefficients of your quadratic equation." << endl;
	cin >> a >> b >> c;
	QuadraticEquation::QuadraticEquation(a, b, c);
    return 0;
}