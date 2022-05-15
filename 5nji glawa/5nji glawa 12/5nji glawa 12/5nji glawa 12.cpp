#include <iostream>

 using namespace std;


struct fraction
{
	int numerator;
	int denominator;
};

fraction  d1, d2, d3;

fraction fadd(fraction, fraction);
fraction fsub(fraction, fraction);
fraction fsmul(fraction, fraction);
fraction fdiv(fraction, fraction);


int main()
{
	char ch, dir;
	fraction  d1, d2, d3;
	cout << "enter num " << endl;
	cin >> d1.numerator >> dir >> d1.denominator;
	cin >> ch;
	cin >> d2.numerator >> dir >> d2.denominator;
	switch (ch)
	{
	case '+': d3 = fadd (d1, d2); break;
	case '-': d3 = fsub (d1, d2); break;
	case '*': d3 = fsmul(d1, d2); break;
	case '/': d3 = fdiv (d1, d2); break;
	}
	cout << d3.numerator << "/" << d3.denominator << endl;
	return 0;
}

fraction fadd(fraction d1, fraction d2)
{
	d3.numerator = (d1.numerator * d2.denominator) + (d1.denominator * d2.numerator);
	d3.denominator = d1.denominator * d2.denominator;
	return d3;
}
fraction fsub(fraction d1, fraction d2)
{
	d3.numerator = d1.numerator * d2.denominator - d1.denominator * d2.numerator;
	d3.denominator = d1.denominator * d2.denominator;
	return d3;
}
fraction fsmul(fraction d1, fraction d2)
{
	d3.numerator = d1.numerator * d2.numerator;
	d3.denominator = d1.denominator * d2.denominator;
	return d3;
}
fraction fdiv(fraction d1, fraction d2)
{
	d3.numerator = d1.numerator * d2.denominator;
	d3.denominator = d1.denominator * d2.numerator;
	return d3;
}