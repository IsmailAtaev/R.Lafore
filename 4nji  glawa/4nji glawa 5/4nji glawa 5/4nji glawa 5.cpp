#include <iostream>
#include <conio.h>
#include <process.h>
#include <iomanip>

using namespace std;

struct Date {

    int day;
    int month;
    int year;
};

int main()
{
    setlocale(LC_ALL, "rus");
    char ch;
    Date info;
    cout << "Введите день месяц и год :"; cin >> info.day>>ch >> info.month >>ch >>info.year;
    cout << info.day << "/"<< info.month << "/" << info.year << endl; 
    return 0;
}