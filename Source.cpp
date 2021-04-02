#include "Rectangle.h"

int main()
{
	cout << "Number of elements of class Rectangle: " << Rectangle::Count() << endl;

	Rectangle A1(3, 4), B1;
	Rectangle A2(5, 2), B2;

	cout << "Number of elements of class Rectangle: " << Rectangle::Count() << endl;

	cout << "A1:" << A1 << endl;

	cin >> B1;
	cout << "B1:" << B1 << endl;

	cout << "A2:" << A2 << endl;

	cin >> B2;
	cout << "B2:" << B2 << endl << endl;

	cout << "Size of private class: " << sizeof(A1) << endl;
	cout << "Size of public class: " << sizeof(A2) << endl;

	cout << "++B1: " << ++B1 << endl;
	cout << "--B1: " << --B1 << endl;
	cout << "B1++: " << B1++ << endl;
	cout << "B1--: " << B1-- << endl << endl;

	cout << "++B2: " << ++B2 << endl;
	cout << "--B2: " << --B2 << endl;
	cout << "B2++: " << B2++ << endl;
	cout << "B2--: " << B2-- << endl << endl;

	cout << "Principle of substitution" << endl;
	Pair N = A2;
	cout << N << endl;

	cout << "Size = " << sizeof(N) << endl << endl;
	double A = 0.0;
	double B = 0.0;

	cout << "Square: " << A1.Square() << endl;

	cout << "Perimeter: " << A1.Perimeter() << endl;

	cout << "Square: " << A2.Square() << endl;

	cout << "Perimeter: " << A2.Perimeter() << endl;

	cout << "Dobutok = " << B2.Dobutok() << endl;
}