#include "Triangle.hpp"

Triangle::Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3)
{

}


double Triangle::getParimeter() const

    {
	double perimeter = 0;

	if (isValid())
	{
		perimeter = a + b + c;
	}

	return perimeter;
    }


double Triangle::getArea() const
{
	double area = 0;

	if (isValid())
	{
		double p = getParimeter() / 2;
		area = sqrt(p * (p - a) * (p - b) * (p - c));
	}

	return area;
}

	bool Triangle::isValid() const
	{
		return (((a + b) > c) && ((b + c) > a) && ((a + c) > b));
	}
