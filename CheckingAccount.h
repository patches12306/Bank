#include <iostream> 
#include "BankAccount.h"
#include <string>
#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
using namespace std;

class CheckingAccount : public BankAccount
{


public:

	int transactionCount;
	const int TRANSACTION_FEE = 3;
	CheckingAccount(string n, double b);
	void deductFees();
	void deposit(double d);
	void withdraw(double w);

};
#endif