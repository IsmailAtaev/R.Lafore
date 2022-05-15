#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char ch;
    float funt, sir, pens,i=12,j=20;
    do 
    {
        cout << "girizin funt.sir.pes:"; 
        cin >> funt;
        cin >> sir;
        cin  >> pens;
        if (pens >= 12)
        {
            while (pens != 0)
                pens -= i;
            sir++;
            if (sir>=20)
            {
                while (sir != 0)
                {
                    sir -= 20;
                    funt++;
                }
                cout << "sir ==20;";
            } 

        }
         

            cout<<"otwet\b"<<funt<<"." << sir << "." << pens << endl;
            /*/pens == pens;
            // cout << funt << "." << sir << "." << pens << endl;
         }
           else if (sir == 20)
         {
             sir - 20;
             funt++;

             cout << funt << "." << sir << "." << pens << endl;
         //   else if(pens ==12.0|| sir==20 )
              //cout << funt <<"."<< */
       
            cout << "choose not and yes:"; cin >> ch;
        }
    while (ch != 'n');
        return 0;
}