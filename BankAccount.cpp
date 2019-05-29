#include "BankAccount.h"
#include <iostream>
#include <string>
using namespace std;

BankAccount::BankAccount(string n, double b){
	name = n;
	balance = b;
}

	double BankAccount::getBalance(){
		return balance;
	}

	string BankAccount::getName(){
		return name;
	}

	void BankAccount::deposit(double d){
		balance = balance + d;
	}

	void BankAccount::withdraw(double w){
		balance = balance - w;
	}

	void BankAccount::toStr(){
		cout << "The name is "<< name << " and the balance is " <<balance<< endl;
	}