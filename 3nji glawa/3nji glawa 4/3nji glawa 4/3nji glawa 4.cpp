#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a, b,c;
	char kal,s;
	do
	{
		cout << "vvesti "; cin >> a >> kal >> b;
		switch (kal)
		{
		case '+': c = a + b;  break;
		case '-': c = a - b; break;
		case '*': c = a * b;  break;
		case '/': c = a / b; break;
		default: cout << " error" << endl;
		}
			cout << c << endl;
			cout << "verite y n" << endl; 
			cin >> s;
			system("cls");
	} 
	while (kal = _getche() != 'n');
	return 0;
}
 