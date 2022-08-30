#include "TaxCalculator.h"


//* 10000 - 30000 - 10 % podatku od kwoty ponad 10000
//* 30000 - 120000 - 25 % podatku od kwoty ponad 30000
//* powy¿ej 120000 - 40 % podatku od kwoty ponad 120000
double TaxCalculator::countTax(double amount)
{
    if (amount <= 10000)
    {
        return 0;
    } 
    else if (amount >= 10000 && amount <=30000)
    {
        return amount*0,1;
    } 
    else if (amount >= 30000 && amount <=120000)
    {
        return amount*0,25;
    }     
    else if (amount>=120000)
    {
        return amount * 0, 4;
    }

}
