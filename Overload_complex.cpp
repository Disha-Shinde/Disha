#include <iostream>
using namespace std;

class complex
{
	float real, imag;
public:
	complex()
	{
		real = 0;
		imag = 0;
	}

	friend ostream &operator <<(ostream &, complex &);
	friend istream &operator >>(istream &, complex &);
	complex operator +(complex &);
	complex operator *(complex &);
};

complex complex :: operator +(complex &c2)
{
	complex c;
	c.real = real + c2.real;
	c.imag = imag + c2.imag;
	return c;
}


complex complex :: operator *(complex &c2)
{
	complex c;
	c.real = (real * c2.real) - (imag * c2.imag);
	c.imag = (real * c2.imag) + (imag * c2.real);
	return c;
}
ostream& operator <<(ostream &mycout, complex &c)
{
	mycout << c.real << "+" << c.imag << "i" << endl;
	return mycout;
}

istream& operator >>(istream &mycin, complex &c)
{
	mycin >> c.real >> c.imag;
	return mycin;
}


int main()
{
	complex c1,c2, c3;
	cout << "Enter complex no. 1	: ";
	cin >> c1;
	cout << "Enter complex no. 2	: ";
	cin >> c2;
	c3 = c1 + c2;
	cout << "Addition		: ";
	cout << c3;
	c3 = c1 * c2;
	cout << "Multiplication	: ";
	cout << c3;
	return 0;
}
