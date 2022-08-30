#include <iostream>
#include "CashAccount.h"
#include "DebitAccount.h"

int main()
{
	CashAccount acc;
	DebitAccount debitAcc;
	std::cout<<	debitAcc.getBalance();
}