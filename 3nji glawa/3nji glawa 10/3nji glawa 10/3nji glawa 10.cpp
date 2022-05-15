#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale (LC_ALL,"rus");

	float a,b,c;
	int yers=0;
	cout << "Введите сумму :"; cin >> a;
	cout << "Введите проценты :"; cin >> b;
	cout << "Введите сумму которую хотите получить :"; cin >> c;
	while (c>a)
	{
		yers++;
		a += a * (b / 100);
	}
	cout << "лет" << yers << setw (25)<< "SUMMA "<< a <<endl;
	return 0;
}