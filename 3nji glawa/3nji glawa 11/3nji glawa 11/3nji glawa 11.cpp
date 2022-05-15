#include<iostream>
#include<conio.h>
#include <process.h>
#include<iomanip>


using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	char ch,dir;
	int funt, chirling, pens,z;
	float x;
	cout << "Введите  Фунт,Ширлинг,Пенс" << endl; 
	cin >> funt >> ch >> chirling >> ch >> pens;
	cout << "Введиет вественный числа :" << endl;
	cin >> x;
	/*if (pens >= 11)
	{
		pens -= 11;
		chirling ++;
	}
	else if(chirling >= 19)
	{
		chirling -= 19;
		funt++;
	}*/

	 z = static_cast<int> (x);
	 x -= z;
	cout << x <<setw(20) << z<<endl;
	 cout << "vvedite pozitiu"; cin >> dir;
	 switch (dir)
	{
	case '+' : 
		funt += z;
		pens += x;
		while (pens > 11)
		{
			chirling++;
			pens -= 11;
			for (int i = 19; chirling > 19; )
				chirling -= 19;
			funt++;
		}
	case '-': funt -= z;
		if (chirling > 19)
		{
			for (int j = 19; chirling > 19;)
				chirling -= 19;
		}
 		for (int q = 11; pens > 11; )
			pens -= 11;
	default:
		break;
	}
	 cout << funt << "," << chirling << "," << pens;
	return 0;
}