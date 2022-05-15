#include <iostream>

using namespace std;

struct Distance {
    int feet;
    int inches;
};

Distance adegl (Distance, Distance);

int main()
{
   Distance d1, d2, d3;
    cout << "Enter number 1: "; cin >> d1.feet;
    cout << "Enter number 1: "; cin >> d1.inches;
    cout << "Enter number 1: "; cin >> d2.feet;
    cout << "Enter number 1: "; cin >> d2.inches;
    d3 = adegl(d1, d2);
    cout << endl;
    cout << d3.feet <<","<< d3.inches << endl;

}
Distance adegl (Distance dd1, Distance dd2)
{
    Distance dd3;
    
    if (dd1.feet && dd1.inches > dd2.feet && dd2.inches)
    {
        dd3 = dd1;
        cout << "d1>d2" << endl;
    }
    else {
        dd3 = dd2;
        cout << "d1<d2" << endl;
    }
    return dd3;
}