#include <iostream> 
#include "CheckingAccount.h"
#include <string>
using namespace std;

CheckingAccount::CheckingAccount(string n, double b) : BankAccount(n, b){
	name = n;
	balance = b;
	transactionCount = 0;
}
	void CheckingAccount::withdraw(double w){
		transactionCount++;
		BankAccount::withdraw(w);
	}

	void CheckingAccount::deposit(double d){
		transactionCount++;
		BankAccount::deposit(d);
	}

	void CheckingAccount::deductFees(){
		balance = balance - (transactionCount * TRANSACTION_FEE);
		transactionCount = 0;
	}