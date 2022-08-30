#include "CashAccount.h"

CashAccount::CashAccount() : _balance(0)
{
}

CashAccount::CashAccount(const CashAccount& other)
{
	_balance = other._balance;
}

double CashAccount::getBalance()
{
	return _balance;
}


bool CashAccount::withdraw(double amount)
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

double CashAccount::deposit(double amount)
{
	_balance += amount;
	return _balance;
}


