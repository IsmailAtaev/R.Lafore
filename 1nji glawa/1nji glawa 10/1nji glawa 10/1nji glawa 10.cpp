#include <iostream>

using namespace std;

int main() {
    char dym;
    int f, sh, p, q, x;
    cout << "|enter currency|\n" << "Funt,Shirling,Pens" << endl; 
    cin >> f >> dym >> sh >> dym >> p;
    x = sh * 12 +p;
    q = x / 2.4;
    if (q >= 100)
    {
        while (q >= 100)
        {
            f++;
            q -= 100;
        }
        cout << "answer\n"<< f << "," << q << endl;
    }
    else
    {

        cout << "answer\n"<< f << "," << q << endl; 
    }
    return 0;
}