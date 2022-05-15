#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int a, b, c, d, e, f;
	char dummy;
	cout << "Введите первую дробь" << endl;
	cin >> a >> dummy >> b;
	cout << "Введите вторую дробь" << endl;
	cin >> c >> dummy >> d;
	e = a * d + b * c;
	f = b * d;
	cout << "сумма равна" << e << "/" << f;
	return 0;
}
