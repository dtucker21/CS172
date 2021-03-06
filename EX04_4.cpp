// EX04_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Rectangle2D.h"

using namespace std;

int main()
{
	double x, y, length, width;
	cout << "Enter the coordinates the rectangle is centered around: ";
	cin >> x >> y;
	cout << "Enter the length and width of your rectangle: ";
	cin >> length >> width;
	Rectangle2D Rect(x, y, length, width);
	double x2, y2, length2, width2, xCheck, yCheck;
	cout << "Enter the coordinates a second rectangle is centered around: ";
	cin >> x2 >> y2;
	cout << "Enter the length and width of this second rectangle: ";
	cin >> length2 >> width2;
	Rectangle2D Rect2(x2, y2, length2, width2);
	cout << Rect.getArea() << endl;
	cout << Rect.getLength() << endl;
	cout << Rect.getWidth() << endl;
	cout << Rect.getPerimeter() << endl;
	cout << Rect.getX() << endl;
	cout << Rect.getY() << endl;
	cout << Rect.contains(Rect2) << endl;
	return 0;
}

