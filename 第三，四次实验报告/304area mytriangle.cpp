#include<iostream>
#include<cmath>
#include"mytriangle.h"
extern bool is_valid(double side1, double side2, double side3)
{
	if (side1 <= 0 || side2 <= 0 || side3 <= 0)
	{
		return false;
	}
	if (side1 + side2 > side3 && side3 + side2 > side1 && side1 + side3 > side2)
	{
		return true;
	}
	return false;
}
extern double triangle_area(double side1, double side2, double side3)
{
	if (!is_valid(side1, side2, side3))
	{
		return false;
	}
	double s = (side1 + side2 + side3) / 2.0;
	double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	return area;
}