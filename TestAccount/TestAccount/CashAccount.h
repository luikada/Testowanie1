#pragma once
#include <string>

class CashAccount
{
private:
	double _balance;

public: 
	CashAccount();
	CashAccount(const CashAccount& other);
	double getBalance();
	bool withdraw(double amount);
	double deposit(double amount);
};

