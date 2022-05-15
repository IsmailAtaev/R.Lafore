#include <iostream>

using namespace std;

class Distanche {
private:
    int feet;
    float inches;
public :

    Distanche():feet(0),inches(0.0)
    { }

    Distanche(int f, float i): feet(f), inches(i)
    { }
    void set()
    {
        cout << "enter feet:\t"; cin >> feet;
        cout << "enter inches:\t"; cin >> inches;
    }
    
    void get() 
    {
        cout << "feet\t" << feet << endl;
        cout << "inches\t" << inches << endl;
    }    
    Distanche operator-(Distanche ) const;
};

Distanche Distanche::operator-(Distanche d1)const 
{
    int f = feet - d1.feet;
    float i = inches - d1.inches;
    if (i >= 12.0)
    {
        i -= 12.0;
        f++;
    }
    return Distanche (f, i);
}

int main()
{
    Distanche dd1, dd2, dd3;

    dd1.set();
    dd2.set();
    dd3 = dd1 - dd2;
    dd3.get();

    return 0;
}