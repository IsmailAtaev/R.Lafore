#include <iostream>

using namespace std;


int main()
{
    /*
    unsigned   int   x,y;
    unsigned long fact = 1;
    cout << "wvedite celoe cislo " << std::endl; 
    cin >> x;
    for (int j = x; j > 0; j--)
        fact *= j;
    cout << "wvedite 0 cto wycsilit fact " << std::endl;
    cin >> y;
    while(y != 0)
    {
        //for (int j = x; j > 0; j--)
          //  fact *= j;
        cout << "otwet " << fact << endl;
    }
    */
    unsigned  int x,y;
    do
    {
        //unsigned   int   x;
        unsigned long fact = 1;
       std:: cout << "vvedite celoe cislo :";
       std::cin >> x;
        for (int j = x; j > 0; j--)

            fact *= j ;
        std::cout << "otwet " << fact <<std::endl;
        cin >> y;
    } while (y != 0);
        return 0;
}