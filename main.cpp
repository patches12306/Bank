#include <iostream> 
//#include <sstream>
#include "BankAccount.cpp"
#include "BankAccount.h"
#include "SavingsAccount.cpp"
#include "CheckingAccount.cpp"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include <string>
using namespace std;

int main(){
	SavingsAccount* saver  = new SavingsAccount("save", 0, .01);
	CheckingAccount* checker = new CheckingAccount("Check", 500);
	saver->deposit(1000);
	checker->withdraw(100);
	saver->withdraw(200);
	checker->deposit(200);
	saver->addInterest();
	checker->deductFees();

	saver->toStr();
	checker->toStr();
}