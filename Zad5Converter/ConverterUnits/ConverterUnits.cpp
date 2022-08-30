#include "ConverterUnits.hpp"

double Coverter::metersToFeet(double feet)
{
	return feet / feetToMeterFactor;
}

double Coverter::feetToMeter(double meter)
{
	return meter * feetToMeterFactor;
}

double Coverter::celciusToFarenheit(double celcius)
{
	return (celcius * 9 / 5) + 32;
}

double Coverter::farenheitToCelcius(double ferenheit)
{
	return (ferenheit - 32) * 5 / 9;
}
