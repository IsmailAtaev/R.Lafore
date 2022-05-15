#include <iostream>

using namespace std;

struct sterling 
{
	int pounds;
	int shillings;
	int pence;
};

int main()
{
	char ch;
	sterling newp,oldp;
	int  x;
	
	cin >> newp.pounds >> ch >> newp.pence;
	x = ((newp.pounds * 100) + newp.shillings) * 2.4;
	newp.pounds = x / (20 * 12) / 12;
	newp.shillings = x % (20 * 12) % 12;
	newp.pence = x % (20 * 12) % 12;
	
	cout << "otwet" << newp.pounds << "." << newp.shillings << "." << newp.pence << endl; 



	return 0;
}
