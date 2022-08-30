#pragma once
#include "CashAccount.h"

//kt�ra rozszerza mo�liwo�ci o przyznawanie debetu (r�wnie� jego zmniejszanie). 
//- setDebitLimit(int)
//- getDebitLimit()
//- payDebit(int)

class DebitAccount : public CashAccount
{

public:
	CashAccount cashAcc;
	DebitAccount();
	void setDebieltLimit(int num);
	int getDebieltLimit();
	int payDebit(double d);

private:
	double debitAmount;
};

