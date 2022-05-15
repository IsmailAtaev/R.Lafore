#include <iostream>

using namespace std;

class date {
private:
	int month,day,year;
	char ch;


	public:

	date (): month(0),day(0),year(0),ch(0)
	{ }
	void getdate(){
		cout << "enter number date/day/year \n"; cin >> month >> ch >> day >> ch >> year;
	}
	void showdate()const {
		cout << month << "/" << day << "/" << year << endl;
	}

	~date ()
	{ }
};


int main()
{
	date d1, d2, d3;
		d1.getdate();
		d1.showdate();
	return 0;
}