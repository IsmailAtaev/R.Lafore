#include <iostream>
//#include  <iomanip>
//#include  <process.h> // для exit 
//#include  <conio.h> // для _getche 

using namespace std;

struct phone 
{
	int city;
	int station;
	int subscriber;
};

int main()
{
	setlocale(LC_ALL, "rus");
	char ch;
	do {
		phone d1, d2;
		d1.city = 212;
		d1.station = 767;
		d1.subscriber = 8900;
		cout << "введите код города, номер страница и номер абонента: " << endl;
		cin >> d2.city >> d2.station >> d2.subscriber;

		cout << "мой номер ("<< d1.city << ")" << d1.station << "-" << d1.subscriber << endl;
		cout << "Ваш номер (" << d2.city << ")" << d2.station << "-" << d2.subscriber << endl;
		
		cout << "(y,n)"; cin >> ch;
		system("cls");
	} while (ch != 'n');

	return 0;
}