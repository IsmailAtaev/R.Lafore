#include <iostream>

using namespace std;

double power(double,int=2);

int main()
{
	 double a;
	 int b;
	 char ch;
	cout << "wwedite cislo"; cin >> a;
	cout << "wywestistepen y,n"; cin >> ch;
	if (ch =='y')
	{

		cout << "wwedite stepen"; cin >> b;
		cout << power(a, b);
	}
	else
	{
		cout << "wywodim kwadrat:"<<endl;
		power(a);

	}
	return 0;

}

double power(double x,int y)
{
	double z =1.0; //cort functiya oli shul z =1.0 
	for (int  i = 0; i < y; i++)
	{
		z*= x;
		cout << z << endl;
	}
	return z;
}
