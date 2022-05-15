#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	char ch;
	do {
		float a, res;
		std::cout << "Введите темературу\n"; std::cin >> a;
		res = a * 9 / 5 + 32;
		std::cout << res << std::endl;
		std::cout << "Введите (y,n)\n"; std::cin >> ch;
		system("cls");
	} while (ch != 'n');
	return 0;
}
