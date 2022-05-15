#include <iostream>


using namespace std;
 
int main()
{
    double g,f,a;
    cout << "\bvyberite shkalu cilsiya 1 a dlay farengeytu 2 \n 1||2\n"; cin >> a; 
    if (a<= 1)
    {
       cout<<"\bvvedite temperatru celsiya :\n"; cin >> g;
        f = (g * 9 / 5) + 32;
        cout<<"\nshkala celsiya = "<< f << endl;
    }
    else if(a>=2)
    {
        cout <<"\n\bvvedite temperaturu farengeyta:"; cin >> f;
        g = (f-32)*5/9;
        cout <<"\n\bshkala farengeyta = " << g << endl;
    }
    cout << endl;
}
