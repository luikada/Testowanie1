#pragma once
# include <cmath>
class Triangle
{
public:
	Triangle(double side1, double side2, double side3);
	double getParimeter() const;
	double getArea() const;
	bool isValid() const;

private:
	double a, b, c;

};

