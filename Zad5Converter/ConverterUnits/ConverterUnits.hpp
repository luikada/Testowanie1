#pragma once
class Coverter
{
public:

	double metersToFeet(double feet);
	double feetToMeter(double meter);
	double celciusToFarenheit(double celicius);
	double farenheitToCelcius(double farenheit);
private:
	const double feetToMeterFactor = 3.281;


};


