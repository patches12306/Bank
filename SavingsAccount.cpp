#include <iostream> 
#include "SavingsAccount.h"
#include <string>
using namespace std;

SavingsAccount::SavingsAccount(string n, double b, double i) : BankAccount(n,b){
	name = n;
	balance = b;
	intRate = i;
}

	void SavingsAccount::addInterest(){
		balance = balance + (balance * intRate);
	}
