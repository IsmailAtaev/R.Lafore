#include <iostream>

using namespace std;

int main()
{
	int Funt, Shirling, Pens, x, y;
	char Ar;
	cout << "wwedite Funt,Shirling,Pens\n"; cin >> Funt >> Ar >> Shirling >> Ar >> Pens;
	x = Pens / 12;
	Shirling += x;
	y = Shirling / 20;
	if (y >= 100)
	{
		while (y >= 100)
		{
			Funt++;
			y -= 100;

		}
		cout << "otwet " << Funt << "," << y<<endl;
	}
	else
	{
		cout << "otwet " << Funt << "," << y<<endl;
	}
	return 0;

}
