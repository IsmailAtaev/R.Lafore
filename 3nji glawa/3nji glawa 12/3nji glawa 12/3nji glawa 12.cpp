#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    setlocale (LC_ALL, "rus");
    float a, b, c, d; 
    char ch, dir;
    do {
        int x, y,z;
        cout <<setw(10)<< "Введите дроб"<< endl; 
        cin >> a >> ch >> b;
        cout << setw(10) << "Введите операцию (+|-|*|/)"<< endl ;
        cin >> dir;
        cout << setw(10) << "Введите второй дроб"<<endl;
        cin >> c >> ch >> d;
        switch (dir)
        {
        case '+':
            x = (a * d ) + (b * c);
            y = (b * d); break;
        case '-':
            x = (a * d) - (b * c);  
            y = (b * d); break;
        case '*':
            x = (a * c);
            y = (b * d); break;
        case '/': 
            x = (a * d);
            y = ( b * c); break;
        default: cout << "Попробуйте ешо раз"<< endl;
        }
        cout << "quly " << x << "/" << y << endl;
        cout << "Хотите провести операцйию ешо раз <y,n>"; cin >> dir;
        system("cls");
    } while (dir = _getche() != 'n');
    
    return 0;
}