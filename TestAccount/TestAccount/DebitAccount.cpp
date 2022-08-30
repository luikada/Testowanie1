#include "DebitAccount.h"

DebitAccount::DebitAccount() : debitAmount(0), CashAccount::CashAccount()
{
}

void DebitAccount::setDebieltLimit(int num)
{
	num = debitAmount;

}

int DebitAccount::getDebieltLimit()
{
	return debitAmount;
}

int DebitAccount::payDebit(double d)
{
	return -debitAmount+d;
}


