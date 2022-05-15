#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	char ch;
	do {
		const 	double  galon = 0.13368055555556, funt = 7.4805194805195;
		//float x, y;
		cout<<"--------------------------"<< endl;
		cout<<"Выберите перевод \n"
			<<"--------------------------\n"
			<<"(1) Фунт\n"
			<<"--------------------------\n"
			<<"(2)Галоны \n"
			<<"--------------------------\n" 
			<<"(0)Выход из программы\n "<< endl;
		int b, f, g,x,y; cin >> b;
	
		switch (b)
		{
		case 0:
			cout << endl; break;
		case 1:
			cout << "Введите Фунт:"; cin >> f;
			x = f * funt;
			cout << "Перевод в Галлоны "<< x<<endl;
			break;
		case 2:
			cout << "Введите Галлоны"; cin >> g;
			y = g * galon;
			cout << "Перевод в Фунты" << y << endl;
			break;
		default:
			cout<<"Нету такого числа:"<< endl; break;
		}
		cout <<"\n Ешо раз <yes and not >"<< endl;
		cin >> ch;
		cout << endl;
		system("cls");
	} while (ch != 'n');
	return 0;
}