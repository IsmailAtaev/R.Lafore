#include <iostream>
#include <iomanip> // dlay setw (_)
#include <process.h> // exit
#include <conio.h> // _getche()


struct Distance {

     int feet; // funt 
     int inches; // duym
};


struct  Volume {

    Distance  height; // wysota
    Distance  lenght; // dlina 
    Distance  width; // shirina
};

int main()
{
    setlocale(LC_ALL, "rus");
    float h, l, w;
    Volume volum1 = { {13,6}, { 10,9 },{ 15,7} };
    h = volum1.height.feet + volum1.height.inches / 12.0;
    l = volum1.lenght.feet + volum1.lenght.inches / 12.0;
    w = volum1.width.feet + volum1.width.inches   / 12.0;
    std::cout << l*h * w << std::endl;
    return 0;
}