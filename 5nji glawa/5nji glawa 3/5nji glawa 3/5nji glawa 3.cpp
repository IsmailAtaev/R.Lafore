#include <iostream>

using namespace std;

void zeroSmaller(int&,int&);


int main()
{
  //  void zeroSmaller(int&, int&);
    int a, b;
    cout << "wwedite 1 cislo "; cin >> a;
    cout << "wwedite 2 cislo "; cin >> b;
    zeroSmaller(a,b);
    cout << "answer\t" << a << "\n" << b << endl;
    return 0;
}

void zeroSmaller(int& x, int& y){
    
    if (x < y)
        x = 0;
    else
        y = 0;
}