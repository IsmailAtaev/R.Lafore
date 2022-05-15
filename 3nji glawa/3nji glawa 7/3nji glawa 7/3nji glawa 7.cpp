#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double sum, let, procent;
    cout << " vvedite cislo sum\n"; cin >> sum;
    cout << " vvedite cislo let \n"; cin >> let;
    cout << " vvedite cislo procen\n"; cin >> procent;
    for (int i = 0; i < let; i++)
    {
        sum += sum * (procent / 100);
    }
    cout << setw(20) << "qucly=" << sum << endl;
    return 0;
}