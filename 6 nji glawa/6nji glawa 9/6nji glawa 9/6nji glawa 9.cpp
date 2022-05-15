#include <iostream>

using namespace std;


class fraction
{
private:
	int numerator;
	int denominator;
public:
		 fraction():numerator(0),denominator(0)
		 { }
		 fraction(int num,int den) :numerator(num), denominator(den)
		 { }
		 static fraction  add(fraction g1, fraction g2)
		 {
			 fraction result;
			 result.numerator = g1.numerator * g2.denominator + g1.denominator * g2.numerator;
			 result.denominator = g1.denominator * g2.denominator;
			 return result;
		 }
		 void setnumerator(int num)
		 {
			 numerator = num;
		 }

		 void setdenumerator(int num )
		 {
			 denominator = num;
		 }

		 int getnumerator()
		 {
			 return numerator;

		 }

		 int getdenumerator()
		 {
			 return denominator;
		 }
		 void print()
		 {
			 cout << numerator << "/" << denominator << endl;
		 }
		 ~fraction()
		 {  } 
};


int main()
{
	fraction b1, b2, bres;
	b1.setnumerator(1);
	b1.setdenumerator(3);
	b2.setnumerator(2);
	b2.setdenumerator(4);

	bres = fraction::add(b1,b2);
	bres.print();



	return 0;
}