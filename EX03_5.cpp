// EX03_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

const string a = "abcdefghijklmnop";

class myInteger
{
public:
	int value;

	myInteger()
	{
		value = 10;
	};
	myInteger(int a)
	{
		value = a;
	};

	int getValue()
	{
		return value;
	}

	bool isEven() 
	{
		if (value % 2 == 0)
		{
			bool even = true;
			return even;
		}
	}
	bool isOdd()
	{
		if (value % 2 == 1)
		{
			bool odd = true;
			return odd;
		}
	}
	bool isPrime()
	{
		for (int divisor = 2; divisor <= value; divisor++)
		{
			if (value % divisor == 0)
			{
				bool prime = false;
				return prime;
				break;
			}
		}
		bool prime = true;
		return prime;
	}
	bool isEven(int a) 
	{
		if (a % 2 == 0)
		{
			bool even = true;
			return even;
		}
	}
	bool isOdd(int a)
	{
		if (a % 2 == 1)
		{
			bool odd = true;
			return odd;
		}
	}
	bool isPrime(int a)
	{
		for (int divisor = 2; divisor <= value; divisor++)
		{
			if (a % divisor == 0)
			{
				bool prime = false;
				return prime;
				break;
			}
		}
		bool prime = true;
		return prime;
	}
	bool isEven(const myInteger&)
	{
		if (myInteger::value % 2 == 0)
		{
			bool even = true;
			return even;
		}
	}
	bool isOdd(const myInteger&)
	{
		if (myInteger::value % 2 == 0)
		{
			bool odd = true;
			return odd;
		}
	}
	bool isPrime(const myInteger&)
	{
		for (int divisor = 2; divisor <= value; divisor++)
		{
			if (myInteger::value % divisor == 0)
			{
				bool prime = false;
				return prime;
				break;
			}
		}
		bool prime = true;
		return prime;
	}
	bool equals(int a)
	{
		if (myInteger::value == a)
		{
			bool equals = true;
			return equals;
		}
		else
		{
			bool equals = false;
			return equals;
		}
	}
	bool equals(const myInteger&)
	{
		if (value == myInteger::value)
		{
			bool equals = true;
			return equals;
		}
		else
		{
			bool equals = false;
			return equals;
		}
	}
	int parseInt(const string &a)
	{
		for (int i = 0; i < 16; i++)
		{
			int parsed = 0;
			parsed = parsed + a[i];
			if (i = 16)
				return parsed;
		}
	}
};

int main()
{
	myInteger A;
	cout << "Enter an integer value: ";
	cin >> A.value;
    return 0;
}

