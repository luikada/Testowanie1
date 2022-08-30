#pragma once
#include <string>

class BankAcocunt
{
private:
	double _balance;

public:
	BankAcocunt();
	double getBalance();
	bool withdraw(double amount);
	double deposit(double amount);
};
