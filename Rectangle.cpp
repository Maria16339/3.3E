#include "Rectangle.h"

Rectangle::Rectangle()
	: Pair()
{}

Rectangle::Rectangle(const double A, const double B)
{
	if (A > 0 && B > 0 )
	{
		SetA(A); SetB(B); 
	}
	else
	{
		SetA(0); SetB(0); 
	}
}

Rectangle::Rectangle(const Rectangle& v)
	: Pair(v)
{}

Rectangle& Rectangle::operator --()
{
	this->SetA(this->GetA() - 1);
	return *this;
}

Rectangle& Rectangle::operator ++()
{
	this->SetA(this->GetA() + 1);
	return *this;
}

Rectangle Rectangle::operator --(int)
{
	Rectangle a(*this);
	this->SetA(this->GetA() - 1);
	return a;
}

Rectangle Rectangle::operator ++(int)
{
	Rectangle a(*this);
	this->SetA(this->GetA() + 1);
	return a;
}

double Rectangle::Dobutok()
{
	return GetA() * GetB() ;
}

double Rectangle::Square() const
{
	double a = GetA();
	double b = GetB();
	double S = 0;

	if (a == 0 || b == 0 )
	{
		cout << "Square of triangle doesn't exists" << endl;
	}
	else
	{
		
		S = a*b;
	}
	return S;
}

double Rectangle::Perimeter() const
{
	double a = GetA();
	double b = GetB();
	double P = 0;

	if (a == 0 || b == 0)
	{
		cout << "Perimeter of triangle doesn't exists" << endl;
	}
	else
	{

		P = a *2+ b*2;
	}
	return P;
}