#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

class fraction {
private:
    int numerator;
    int denominator;
    char dir;
public:
    fraction() :numerator(0), denominator(0),dir ('.')
    { }
    void setlter() {
        cout << "numerator number and denumeration number : " << endl; 
        cin  >> numerator>>dir>>denominator;
    }
   
    void fadd(fraction d1, fraction d2) {
        numerator = d1.numerator * d2.denominator + d1.denominator * d2.numerator;
        denominator = d1.denominator * d2.denominator;
    }
   
    void fsub(fraction d1, fraction d2)
    {
        numerator = d1.numerator * d2.denominator - d1.denominator * d2.numerator;
        denominator = d1.denominator * d2.denominator;
    }
    void fsuml(fraction d1, fraction d2)
    {
        numerator = d1.numerator * d2.numerator;
        denominator = d1.denominator * d2.denominator;
    }
    void fdiv(fraction d1, fraction d2)
    {
        numerator = d1.numerator * d2.denominator;
        denominator = d1.denominator * d2.numerator;
    }


    void print()
    {    cout << numerator << "/" << denominator << endl;}
    void lowterms();
    ~fraction()
    { }
};

 void  fraction::lowterms()
{
    long tnum, tned, temp, gcd;
    tnum = labs(numerator);
    tned = labs(denominator);
    if (tned == 0)
    {
        cout << "error znamenatel!: "; exit(1);
    }
    else if (tnum == 0)
    {
        numerator = 0; denominator = 1;
        return;
    }
    while (tnum != 0)
    {
        if (tnum < tned)
        {
            temp = tnum; tnum = tned; tned = temp;
            tnum = tnum - tned;
        }
        gcd = tned;
        numerator = numerator / gcd;
        denominator = denominator / gcd;
    }
    
}

int main()
{
    char chc;
    do {
        fraction b1, b2, bres;
        b1.setlter();
        b2.setlter();
        char ch;

        cout << "enter +-*/ "; cin >> ch;
        switch (ch)
        {
        case'+': bres.fadd(b1, b2); break;
           case'-': bres.fsub(b1, b2); break;
            case'*': bres.fsuml(b1,b2); break;
            case'/': bres.fdiv(b1, b2); break;
        }
      //  bres.lowterms();
        bres.print();
        cout << "enter siblo age "; cin >> chc;
    } while (chc != 'n');
    return 0;
}