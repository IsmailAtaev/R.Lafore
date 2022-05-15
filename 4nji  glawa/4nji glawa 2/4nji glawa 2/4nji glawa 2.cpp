#include <iostream>
#include <iomanip>

using namespace std;

struct point {
    
    int x;
    int y;
};

int main()
{
    setlocale(LC_ALL, "rus");

    point p1, p2, p3;
    p1.x;
    p1.y;
    p2.x;
    p2.y;
    cout << "Введите координаты точки p1\t"; cin >> p1.x; cin >> p1.y;
    cout << "Введите координаты точки p2\t"; cin >> p2.x; cin >> p2.y;
    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;
    cout << "Координаты точки p1 и p2 равны " << p3.x << setw(10) << p3.y << endl;
    return 0;
}