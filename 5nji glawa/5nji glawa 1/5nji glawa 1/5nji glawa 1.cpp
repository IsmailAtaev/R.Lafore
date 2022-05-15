#include <iostream>

using namespace std;

float  cirecal(float red)
{
    float area, PI = 3.14159F;
    area = PI * red * red;
    return area;
}

int main ()
{
setlocale(LC_ALL, "rus");

    float rad;
        cout << "Ведите радиус окружности:\n"; cin >> rad;
        cirecal(rad);
        cout<<"Плошадь круга равна \t" << cirecal(rad) << endl;
        return 0;
}