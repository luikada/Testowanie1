#include "BankAcocunt.h"

BankAcocunt::BankAcocunt() : _balance(0)
{
}

double BankAcocunt::getBalance()
{
	return _balance;
}


bool BankAcocunt::withdraw(double amount)
{
	if (amount <= _balance)
	{
		_balance -= amount;
		return _balance;

	}
	else
	{
		return _balance;
	}

}

double BankAcocunt::deposit(double amount)
{
	_balance += amount;
	return _balance;
}

