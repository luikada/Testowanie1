#include "pch.h"
#include "../TestAccount/BankAcocunt.h"


TEST(TestCashAccount, TestEmptyAcc) {

	BankAcocunt account;

   EXPECT_EQ(account.getBalance(),0);

}

TEST(TestCashAccount, TestDepo) {

	BankAcocunt account;
	account.deposit(1000);

   EXPECT_EQ(account.getBalance(),1000);

}
TEST(TestCashAccount, TestWith) {

	BankAcocunt account;
	account.deposit(10000);
	account.withdraw(2000);

   EXPECT_EQ(account.getBalance(),8000);

}