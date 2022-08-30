#pragma once
#include "CashAccount.h"

//która rozszerza mo¿liwoœci o przyznawanie debetu (równie¿ jego zmniejszanie). 
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

