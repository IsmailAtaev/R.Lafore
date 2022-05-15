#include <iostream>

using namespace std;

int main()
{
    
    int  a,j,z;
    cout << "enter number:"; cin >> a;
    for (j = 1; j < 200; j++)
    {
        //cout << "j = " << j <<"\n"<< endl; 
        z = j * a;
        cout << z<<" ";
        if (j%10==0)
        {
            z = j * a;
            cout << z << endl;
        }
    }

    return 0;
}