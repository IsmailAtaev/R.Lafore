#include <iostream>

using namespace std;

struct fraction
{
	int numerator;
	int denominator;
};
 
int main()
{
	setlocale(LC_ALL, "rus");
	char ch;
	fraction d1,d2;
	cout << "Введите первый числитель и знаменатель "; cin >> d1.numerator>> ch >> d1.denominator;
	cout << "Введите второй  числитель и знаменатель "; cin >> d2.numerator >> ch >> d2.denominator;
	int  s = d1.numerator * d2.denominator + d1.denominator * d2.numerator;
	int a = d1.denominator*d2.denominator;
	cout << "\n" << s <<"/"<<a<< endl;
	return 0;
}