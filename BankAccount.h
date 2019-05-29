#include <iostream> 
#include <string>
//#include <sstream>
#include <stdio.h>
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
using namespace std; 

class BankAccount
{
private:	
	

public:
	
	string name;
	double balance;
	BankAccount(string n, double b);
	double getBalance();
	string getName();
	void deposit(double d);
	void withdraw(double w);
	void toStr();
};
#endif