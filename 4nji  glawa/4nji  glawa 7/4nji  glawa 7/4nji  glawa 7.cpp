#include <iostream>
#include <iomanip>

using namespace std;

enum etype { laborer, secretary, manager, accountant, executive, researcher };

// labirer , chornorabociy 
//executive administratiwnye 
//researche ! isledowatel

struct date {

    int day;
    int month;
    int year;
};

struct employee 
{
    char empl[15];
    int number;
    float money;

    etype post;
    date date1;
};




int main()
{

    setlocale(LC_ALL, "rus");
   
    char prob = '/', sim;
    employee d1, d2, d3;


    for (int i = 0; i < 4; i++) {
        if (i == 1)

        {

            cout << "1-Й Сотрудник" << endl;

            cout << "Номер: "; cin >> d1.number;
            cout << "Зарплата: "; cin >> d1.money;
           // cout << "Должность: "; cin >> sim;
            cout << "Дата: "; cin >> d1.date1.day >> prob >> d1.date1.month >> prob >> d1.date1.year;
            cout << "Должность: "; cin >> sim;

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


                




        }
        else if (i==2)
        {
        cout << "2-Й Сотрудник\n" << "---------------------------------------------------------------------------------" << endl;
        cout << "Номер: "; cin >> d2.number;
        cout << "Зарплата: "; cin >> d2.money;
        cout << "Должность: "; cin >> sim;
        cout << "Дата: "; cin >> d2.date1.day >> prob >> d2.date1.month >> prob >> d2.date1.year;
        }
        else if (i == 3)
        {
            cout << "3-Й Сотрудник\n" << "---------------------------------------------------------------------------------" << endl;
            cout << "Номер: "; cin >> d3.number;
            cout << "Зарплата: "; cin >> d3.money;
            cout << "Должность: "; cin >> sim;
            cout << "Дата: "; cin >> d3.date1.day >> prob >> d3.date1.month >> prob >> d3.date1.year;
        }
    }

    for (int j = 0; j < 4; j++)
    {
        switch (sim)
        {
        case 'l':  prev = laborer;  break;
        case 's':  prev = secretary;  break;
        case 'm':  prev = manager;  break;
        case 'a':  prev = accountant;  break;
        case 'e':  prev = executive;  break;
        case 'r':  prev = researcher;  break;
        default:
            cout << endl;
            break;
        }
    }


    /*cout << d1.number << endl;
    cout << d1.money << endl;
    cout << "---------------------------------------------------------------------------------" << endl;
   
    cout << d2.number << endl;
    cout << d2.money << endl;


    cout << d3.number << endl;
    cout << d3.money << endl;*/


   

    switch (prev)
    {
    case 0:  str0; cout << str0 << endl; break;
    case 1:  str1; cout << str1 << endl; break;
    case 2:  str2; cout << str2 << endl; break;
    case 3:  str3; cout << str3 << endl; break;
    case 4:  str4; cout << str4 << endl; break;
    case 5:  str5; cout << str5 << endl; break;
    default:
            cout << endl;
        break;
    
    
    }

    cout << d1.number << endl;
    cout << d1.money << endl;
    cout << "---------------------------------------------------------------------------------" << endl;

    cout << d2.number << endl;
    cout << d2.money << endl;


    cout << d3.number << endl;
    cout << d3.money << endl;


    cout << " Дата " << d1.date1.day << "/" << d1.date1.month << "/" << d1.date1.year << endl;
    cout << " Дата " << d2.date1.day << "/" << d2.date1.month << "/" << d2.date1.year << endl;
    cout << " Дата " << d3.date1.day << "/" << d3.date1.month << "/" << d3.date1.year << endl;

    
    
    return 0;
}
