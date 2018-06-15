#include <iostream>
#pragma once

using namespace std;

class Rectangle2D
{
private:
	double x, y;
	double length, width;
	void setX(double x) {
		this->x = x;
	};
	void setY(double y) {
		this->y = y;
	};
	void setLength(double length) {
		this->length = length;
	};
	void setWidth(double width) {
		this->width = width;
	};
public:
	double getX() {
		//PT -- don't do cout statements in these get functions. Just return the value.
		cout << "X = ";
		return x;
		cout << endl;
	};
	double getY() {
		cout << "Y = ";
		return y;
		cout << endl;
	};
	double getLength() {
		cout << "Length = ";
		return length;
		cout << endl;
	};
	double getWidth() {
		cout << "Width = ";
		return width;
		cout << endl;
	};
	double getArea() {
		cout << "Area = ";
		return length * width;
		cout << endl;
	};
	double getPerimeter() {
		cout << "Perimeter = ";
		return length + length + width + width;
		cout << endl;
	};
	bool contains(double a, double b) {
		cout << "Contains is: ";
		for (double i = x - length / 2; i < x + length / 2; i += .1)
		{
			if (a == i)
			{
				for (double j = y - width / 2; j < y + width / 2; j += .1)
				{
					if (b == j)
					{
						return true;
						break;
					}
					else
						return false;
				}
			}
			else
				return false;
		}
		cout << endl;
	};
	bool contains(const Rectangle2D &r) {
		cout << "Contains is: ";
		for (double i = x - length / 2; i < x + length / 2; i += .1)
		{
			if (r.x - r.length / 2 > i - length / 2 && r.x + r.length / 2 < i + length / 2)
			{
				for (double j = y - width / 2; j < y + width / 2; j += .1)
				{
					if (r.y - r.width / 2 > j - width / 2 && r.y + r.width / 2 < j + width / 2)
					{
						return true;
						break;
					}
					else
						return false;
				}
			}
			else
				return false;
		}
		cout << endl;
	};
	bool overlaps(const Rectangle2D &r) {
		//PT -- Oops. Let's get the code written.
		//  -3
		cout << "This function has no code written for it. I apologise.";
	}
	Rectangle2D(double a, double b, double c, double d);
	~Rectangle2D();
};

