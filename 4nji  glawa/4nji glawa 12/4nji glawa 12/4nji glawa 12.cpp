#include <iostream>

using namespace std;

struct fraction
{
	int numerator; // a /c
	int denominator; //b /d
};

int main()
{
	setlocale(LC_ALL, "rus");
	char ch,dir;
	do {
		fraction d1, d2, d3;
		cout << "Введите первый числитель и знаменатель "; cin >> d1.numerator >> ch >> d1.denominator;
		cout << "Введите второй  числитель и знаменатель "; cin >> d2.numerator >> ch >> d2.denominator;
		cout << "+-/*"; cin >> ch;
		switch (ch)
		{
		case '+': d3.numerator = d1.numerator * d2.denominator + d1.denominator * d2.numerator;
			d3.denominator = d1.denominator * d2.denominator;
	
		case '-': d3.numerator = d1.numerator * d2.denominator - d1.denominator * d2.numerator;
			d3.denominator = d1.denominator * d2.denominator;
		
		
		case'*': d3.numerator = d1.numerator * d2.numerator;
			d3.denominator = d1.denominator * d2.denominator;
		
		case '/':  	d3.numerator= d1.numerator * d2.denominator;
			d3.denominator = d1.denominator * d2.numerator;
		default:
			break;
		}
		cout << "otwet" << d3.numerator << "/" << d3.denominator << endl; 
		cout << "y,n" << endl;
		cin >> dir;
	} while (dir != 'n');
	return 0;
}