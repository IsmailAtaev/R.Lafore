#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

class fraction 
{
private:
    int numerator;
    int denominator;
    char dir;
public:
    fraction():numerator(0), denominator(0), dir ('.')
    {    }
    fraction(int n , int d) :numerator(n), denominator(d), dir('.')
    {    }
    void setlter() 
    {
        cout << "Numerator number and Denumeration number : " << endl;
        cin >> numerator >> dir >> denominator;
    }
    fraction operator+ (fraction d1);
    fraction operator- (fraction d1);
    fraction operator* (fraction d1);
    fraction operator/ (fraction d1);
    fraction operator== (fraction d1);
    void print()const 
    {
        cout << numerator << "/" << denominator << endl;
    }
  

   /* void lowterms()
    {
       int  long tnum, tned, temp, gcd;
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
            numerator /= gcd;
             denominator /= gcd;
        }

    }
    */
    ~fraction()
    {  }
};


fraction fraction::operator+ (fraction d1)
{
    fraction fr;
    fr.numerator = d1.numerator * denominator + d1.denominator * numerator;
    fr.denominator = d1.denominator * denominator;
    return fraction(fr);
}
fraction fraction::operator- (fraction d1)
{
    fraction fr;
    fr.numerator = d1.numerator * denominator - d1.denominator * numerator;
    fr.denominator = d1.denominator * denominator;
    return fraction(fr);
}
fraction fraction::operator* (fraction d1)
{
    fraction fr;
    numerator = d1.numerator * numerator;
    denominator = d1.denominator * denominator;
    return fraction(fr);
}
fraction fraction::operator/ (fraction d1)
{
    fraction fr;
    fr.numerator = d1.numerator * denominator;
    fr.denominator = d1.denominator * numerator;
    return fraction(fr);
}
fraction fraction::operator== (fraction d1)
{
    if (numerator == d1.numerator && denominator == d1.denominator)
    {
        return fraction(numerator, denominator);
    }
    else {
        cout << " Ne rawny " << endl;
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
        cout << " Enter [ + - * / ]"; cin >> ch;
        switch (ch)
        {
        case '==': b1 == b2; break;
        case'+': bres = b1 + b2; break;
        case'-': bres = b1 - b2; break;
        case'*': bres = b1 * b2; break;
        case'/': bres = b1 / b2; break;
        }
        //bres.lowterms();
        bres.print();

        cout << " Enter siblo age "; cin >> chc;
    } while (chc !='n');
    return 0;
}