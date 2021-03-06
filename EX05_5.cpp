// EX05_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include "newAccount.h"
#include "newAccount.cpp"

using namespace std;

int main()
{
	int ID;
	double bal, interest;
	cout << "Enter an ID, balance, and interest rate: ";
	cin >> ID >> bal >> interest;
	string name;
	cout << "\nEnter a name: ";
	cin >> name;
	newAccount test;
	test = newAccount(ID, bal, name);
	cout << "\nID: ";
	test.getID();
	cout << "\nBalance: ";
	test.getBalance();
	cout << "\nName: ";
	test.getName();
	test.setInterest(interest);
	cout << "\nInterest rate: ";
	test.getInterest();
	cout << "\nWithdrawal amount: ";
	double withdraw;
	cin >> withdraw;
	test.withdraw(withdraw);
	cout << "\nNew balance: ";
	test.getBalance();
	cout << "\nDeposit amount: ";
	double deposit;
	cin >> deposit;
	test.deposit(deposit);
	cout << "\nNew balance: ";
	test.getBalance();
    return 0;
}

