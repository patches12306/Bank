#include <iostream> 
#include "BankAccount.h"
#include <string>
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
using namespace std;


class SavingsAccount : public BankAccount

{

public:
	double intRate;
	SavingsAccount(string n, double b, double i);
	void addInterest();
};
#endif
