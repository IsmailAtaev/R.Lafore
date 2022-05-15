#include <iostream>

using namespace std;

enum etype { laborer, secretary, manager, accountant, executive, researcher};


// labirer , chornorabociy 
//executive administratiwnye 
//researche ! isledowatel

struct date 
{
    int day;
    int month;
    int year;
};

struct employee
{
    char empl[15]; /// ozimem bilemok name ucin etdim 
    int number;
    float money;
    etype post;
    date date1;
};

int main()
{
    setlocale(LC_ALL, "rus");

    char prob, sim;
    employee d1, d2, d3;

    cout << "1-Й Сотрудник" << endl;
    cout << "Номер: Зарплата: Дата: Должность:"<<endl;
    cin >> d1.number >> d1.money >> d1.date1.day >> prob >> d1.date1.month >> prob >> d1.date1.year>> sim;

    switch (sim)
    {
    case 'l':  d1.post = laborer;  break;
    case 's':  d1.post = secretary;  break;
    case 'm':  d1.post = manager;  break;
    case 'a':  d1.post = accountant;  break;
    case 'e':  d1.post = executive;  break;
    case 'r':  d1.post = researcher;  break;
    default:
        cout << endl;
        break;
    }

    cout << "2-Й Сотрудник" << endl;
    cout << "Номер: Зарплата: Дата: Должность:" << endl;
    cin >> d2.number >> d2.money >> d2.date1.day >> prob >>d2.date1.month >> prob >> d2.date1.year >> sim;

    switch (sim)
    {
    case 'l':  d2.post = laborer;  break;
    case 's':  d2.post = secretary;  break;
    case 'm':  d2.post = manager;  break;
    case 'a':  d2.post = accountant;  break;
    case 'e':  d2.post = executive;  break;
    case 'r':  d2.post = researcher;  break;
    }

    cout << "3-Й Сотрудник" << endl;
    cout << "Номер: Зарплата: Дата: Должность:" << endl;
    cin >> d3.number >> d3.money >> d3.date1.day >> prob >> d3.date1.month >> prob >> d3.date1.year >> sim;

    switch (sim)
    {
    case 'l':  d3.post = laborer;  break;
    case 's':  d3.post = secretary;  break;
    case 'm':  d3.post = manager;  break;
    case 'a':  d3.post = accountant;  break;
    case 'e':  d3.post = executive;  break;
    case 'r':  d3.post = researcher;  break;
    }
    system("cls");
    cout << "---------------------------------------\n" << endl;
    cout << "Номер: " << d1.number << endl;
    cout << "Зарплата:" << d1.money << endl;
    cout << "Дата:" << d1.money << endl;

    switch (d1.post)
    {
    case 0: cout << " laborer\n"; break;
    case 1: cout<<" secretary\n";  break;
    case 2: cout <<"manager\n";  break;
    case 3: cout <<"accountant\n";  break;
    case 4: cout<<" executive\n";  break;
    case 5: cout <<" researcher\n";  break;
    }
    cout << "---------------------------------------\n" << endl;

    cout << "Номер: " << d2.number << endl;
    cout << "Зарплата:" << d2.money << endl;
    cout << "Дата:" << d2.money << endl;

    switch (d2.post)
    {
    case 0: cout << " laborer\n"; break;
    case 1: cout << " secretary\n";  break;
    case 2: cout << "manager\n";  break;
    case 3: cout << "accountant\n";  break;
    case 4: cout << " executive\n";  break;
    case 5: cout << " researcher\n";  break;
    }
    cout << "---------------------------------------\n" << endl;
    cout << "Номер: " << d3.number << endl;
    cout << "Зарплата:" << d3.money << endl;
    cout << "Дата:" << d3.money << endl;

    switch (d3.post)
    {
    case 0: cout << " laborer\n"; break;
    case 1: cout << " secretary\n";  break;
    case 2: cout << "manager\n";  break;
    case 3: cout << "accountant\n";  break;
    case 4: cout << " executive\n";  break;
    case 5: cout << " researcher\n";  break;
    }
    cout << "---------------------------------------\n" << endl;
    return 0;
}