#include <iostream>

using namespace std;

class Distance {
private:
	int feet;
	float  inches;
public:
	Distance(): feet (0), inches(0)
	{ }
	Distance(int a ,float b)
	{ 
		feet = a;
		inches = b;
	}
	void getdist()
	{
		cout << "enter feet "; cin >> feet;
		cout << "enter inches"; cin >> inches;
	}

	void showdist() const  
	{
		cout << "feet  " << feet << "\t inches  " << inches << endl;
	}

	void  add_dist(Distance,Distance);
	void div_dist(Distance, int divisor);

	~Distance()
	{ }
};
void  Distance::add_dist(Distance dd1, Distance dd2)
{
	inches = dd1.inches + dd2.inches;
	feet = 0;
	if (inches >= 12.0)
	{
		inches -= 12.0;
		feet++;
	}
	feet += dd1.feet + dd2.feet;
}
void Distance::div_dist(Distance q2, int divisor)
{
	float fitfeet = q2.feet + q2.inches / 12.0;
	 fitfeet /= divisor;
	feet = int(fitfeet);
	inches = (fitfeet - feet ) * 12.0;
}


int main()
{
	Distance d1[100];
	Distance total(0, 0.0) ,s1;
		
	int j = 0;
	char ch;
	do
	{
		d1[j++].getdist();
			cout << "y,n "; cin >> ch;
	} while (ch != 'n');

	for (int i = 0; i < j; i++)
	{

		total.add_dist(total, d1[i]);
		s1.div_dist(total, j);
		s1.showdist();
	}
	return 0;
}