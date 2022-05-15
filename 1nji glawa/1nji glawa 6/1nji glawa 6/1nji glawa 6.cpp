#include <iostream>
#include <iomanip>

using namespace std;

    float   funt ( float   a, float    funtt ) {

     float  resault;
     resault = a * funtt;
     return  resault ;
}
    
  float   frank( float  a, float frankk) {
        float  resualt;
       // float  resualt;
        resualt = a * frankk;
        return resualt;
    }

  float germanyy(float  a, float  germany) {
      float resualt;
      resualt = a * germany;
      return resualt;
  }

int main()
{
    setlocale(LC_ALL, "rus");
    char ch;
    do {
        int vybor;
       float  funtt = 1.487, frankk = 0.172, germany = 0.584, japan = 0.00955;
        float  a;  // peremennye ;
        cout << "\t\t\tДЕНЕЖНЫЙ ПЕРЕВОД" << endl;
        cout << "(0)Выход из программы\n" << "(1) Фунт\n" << "(2) Франк\n"<<"(3) Германия\n"<< "(4) Япония\n"<< endl;
        cin >> vybor;
        switch (vybor)
        {
        case 0: break;
        case 1:
            cout << "Введите Фунт"; cin >> a;
            cout <<"Перевод В США = " <<funt(a, funtt) << endl;
            break;
        case 2:
            cout << "Введите Франк ;"; cin >> a;
            cout << "Перевод В США = " <<frank(a, frankk) << endl;
            break;
        case 3 : 
            cout << "Введите germany ;"; cin >> a;
            cout << "Перевод В США = " << frank(a, germany ) << endl;
            break;
        case 4:
            cout << "Введите japanis  ;"; cin >> a;
            cout << "Перевод В США = " << frank(a, japan ) << endl;
            break;
          default:
                cout << " Некоректный ввод." << endl; 
                break;
        }
        cout << " \n Желаете продолжить <yes and not >  (y,n)" << endl;
        cin >> ch;
        system("cls");
    }  while (ch != 'n');
    /*if (ch = !'n')
    {
        cout << "neprawilnye wwod";
    }*/
       return 0;
}
