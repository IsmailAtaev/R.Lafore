#include <iostream>

using namespace std;


struct  employee // nayemnye rabocie 
{

    int benefist; //possobiya 
    float staff; // sotrudnici
};

int main()
{
    setlocale( LC_ALL ,"rus");

    employee d1, d2,d3;
    cout << "Введите номер сотрудника N1 и пособию :"; cin >> d1.staff >> d1.benefist;
    cout << "Введите номер сотрудника N2 и пособию :"; cin >> d2.staff >> d2.benefist;
    cout << "Введите номер сотрудника N3 и пособию :"; cin >> d3.staff >> d3.benefist;

    cout << " номер сотрудника N1 и пособия:" << d1.staff << "\t" << d1.benefist << endl;
    cout << " номер сотрудника N2 и пособия :" << d2.staff << "\t" << d2.benefist << endl;
    cout << "номер сотрудника N3 и пособия :"<< d3.staff << "\t" << d3.benefist << endl;
    return 0;
}
