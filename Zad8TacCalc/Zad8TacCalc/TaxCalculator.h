#pragma once
//Klasa TaxCalculator

//- metoda która wyliczy kwotê progresywnego podatku dla podanej wartoœci :
//*poni¿ej 10000 - 0 % podatku
//* 10000 - 30000 - 10 % podatku od kwoty ponad 10000
//* 30000 - 120000 - 25 % podatku od kwoty ponad 30000
//* powy¿ej 120000 - 40 % podatku od kwoty ponad 120000
//
//przyk³ady :
//	kwota->podatek
//	8000 -> 0
//	18000 -> 800 (0.0 x 10000 + 0.10 * 8000)
//	256250 -> 79000 (0.0 × 10000 + 0.10 × 20000 + 0.25 × 90000 + 0.40 × 136250)
//
//	2000 + 22500 + 54 500
//	0 % -> 10000
//	10 % -> 20000
//	25 % -> 90000
//	40 % -> 136250
//
//	(Dla chêtnych 1) zrób tak aby mo¿na by³o zmieniaæ wysokoœci podatków i progów
//	(Dla chêtncyh 2) dodaj mo¿liwoœæ dodawania i usuwania progów

class TaxCalculator
{private:
	
public:
	double countTax(double amount);
};

