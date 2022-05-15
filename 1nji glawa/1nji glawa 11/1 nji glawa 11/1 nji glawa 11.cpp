#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	
	cout << setiosflags(ios::left)
		<< setw(15) << "Firstname"<< setw(15) << "Surname" << setw(15) << "Addres" << "City" << endl;
	cout << "-----------------------------------------------------------" << endl;
		cout << setw(15) << "Петров" << setw(15) << "Василий" << setw(15) << "Кленовая 16" << "Санк-Петербург" << endl;
		cout << setw(15) << "Иванов" << setw(15) << "Сергей" << setw(15) << "Осинова 3" << "Находка" << endl;
		cout << setw(15) << "Сидоров" << setw(15) << "Иван" << setw(15) << "Березовая 21" << "Калининград" << endl;
	return 0;
}