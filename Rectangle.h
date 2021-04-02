
#pragma once
#include "Pair.h"

class Rectangle : public Pair
{
public:
	Rectangle();
	Rectangle(const double a, const double b);
	Rectangle(const Rectangle& v);

	Rectangle& operator ++ ();
	Rectangle& operator -- ();
	Rectangle operator ++ (int);
	Rectangle operator -- (int);

	double Dobutok();
	double Square() const;
	double Perimeter() const;
};
