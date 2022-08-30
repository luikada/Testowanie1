#pragma once
//Klasa TaxCalculator

//- metoda kt�ra wyliczy kwot� progresywnego podatku dla podanej warto�ci :
//*poni�ej 10000 - 0 % podatku
//* 10000 - 30000 - 10 % podatku od kwoty ponad 10000
//* 30000 - 120000 - 25 % podatku od kwoty ponad 30000
//* powy�ej 120000 - 40 % podatku od kwoty ponad 120000
//
//przyk�ady :
//	kwota->podatek
//	8000 -> 0
//	18000 -> 800 (0.0 x 10000 + 0.10 * 8000)
//	256250 -> 79000 (0.0 � 10000 + 0.10 � 20000 + 0.25 � 90000 + 0.40 � 136250)
//
//	2000 + 22500 + 54�500
//	0 % -> 10000
//	10 % -> 20000
//	25 % -> 90000
//	40 % -> 136250
//
//	(Dla ch�tnych 1) zr�b tak aby mo�na by�o zmienia� wysoko�ci podatk�w i prog�w
//	(Dla ch�tncyh 2) dodaj mo�liwo�� dodawania i usuwania prog�w

class TaxCalculator
{private:
	
public:
	double countTax(double amount);
};

