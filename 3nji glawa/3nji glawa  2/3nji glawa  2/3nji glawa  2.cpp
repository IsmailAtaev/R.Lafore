#include <iostream>

using namespace std;

int main()
{
    char ch;
    do
    {
        float  y, x, per;
        cout << "enter 1 temperatura celsiya C^ \nenter 2 Faringeyt F^:"; cin >> per;
        if (per == 1)
        {
            cout << "enter number  perewoda po temperature:\t"; cin >> x;
            y = (x * 9 / 5) + 32;
            cout << y<<endl;
        }
        else if (per == 2)
        {
            float a, b;
            cout << "enter number  perewoda po faringeytu\t"; cin >> a;
            b = (a - 32) * 5 / 9;
            //b = a - 32;
            //c = b * 5 / 9;
            cout << b << endl;
        }
        else if (per < 1 || per > 2)
        {
            cout << "Necorektnye wwod Wedite snowa pleass" << endl;
        }
        cout << "\n(Y||N )";  cin >> ch;
        system("cls");
    } while (ch != 'n');
    return 0;
}