#include <iostream>

using namespace std;


/*int foo1(int)
{


}*/



int main()
{
    setlocale(LC_ALL, "rus");

    int ax;

    float Funt, Penst,frac,q;
     int Paund, shirling=1;
    cout << "Введите десятичный Фунт:"; cin >> Funt;
    Paund = static_cast<int>(Funt);
    frac = Funt - Paund;
    q = frac * 20;
    
    
 
    // 15.365 wwod;

    
    /* if (q >= 12)
    {
        while (q >= 12)
        {
            shirling++;
            q -= 12;
        }
        
    }
    else if (shirling>=20)
    {
        while (shirling>=20)
        {
            Funt++;
            shirling -= 20;
        }
        

    }*/
    cout << "Ответ" << Paund << "." << q << endl;
    return 0;
}