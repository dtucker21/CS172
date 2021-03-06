// EX05_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <ctime>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <stack>

using namespace std;

template <typename T>
void shuffleVector(vector<T> &v);

int main()
{
	vector<int> v1;
	cout << "Enter 10 integers: ";
	for (int i = 0; i < 10; i++)
	{
		int input;
		cin >> input;
		v1.push_back(input);
	}
	shuffleVector(v1);
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";
    return 0;
}

template <typename T>
void shuffleVector(vector<T> &v)
{
	srand(time(NULL));
	stack<T> stk1;
	stack<T> stk2;
	stack<T> stk3;
	for (int i = 0; i < v.size(); i++)
	{
		int random = rand() % 3;
		if (random == 1)
		{
			stk1.push(v[i]);
		}
		else if (random == 2)
		{
			stk2.push(v[i]);
		}
		else
		{
			stk3.push(v[i]);
		}
		while (!stk1.empty())
		{
			v.push_back(stk1.top());
			stk1.pop();
		}
		while (!stk2.empty())
		{
			v.push_back(stk2.top());
			stk2.pop();
		}
		while (!stk3.empty())
		{
			v.push_back(stk3.top());
			stk3.pop();
		}
	}
}