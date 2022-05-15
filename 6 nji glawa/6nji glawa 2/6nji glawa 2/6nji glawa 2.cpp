#include <iostream>
#include <conio.h>

using namespace std;

const char Esc = 27;
const double TOOL = 0.5;

class tollBooth
{
private:
	unsigned int car;
	double cash;


public:
	tollBooth() :car(0), cash(0.0)
	{ }
	void paycar()
	{
		car++;
		cash +=TOOL;
	}
	void  nopaycar() {
		car++;
	}
	void display()const
	{
		cout << " mashyna " << car << "\n dengi" << cash << endl;
	}
};


int main()
{
	tollBooth booth;
	char ch;

	cout << "0 car and cash" << endl;
	cout << "1 car " << endl;
	cout << "exit Esc \n" << endl;
	do {
		ch = _getche();
		if (ch == '0')
			booth.paycar();
		 if (ch == '1')
			booth.nopaycar();

	} while (ch != 'ESC');
	booth.display();
	return 0;
}