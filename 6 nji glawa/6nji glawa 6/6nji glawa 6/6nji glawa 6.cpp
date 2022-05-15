#include <iostream>
#include <iomanip>

using namespace std;

class Date  
{
public:
	int month, day, year;
	//Date(int m,int d ,int y): month(m),day(d),year(y)
	//{ }
	Date (): month(0),day(0),year(0)
		{ }
	~Date ()
	{ }
};


class employye 
{
private :
	int numemp;
	float salary;
	Date date;
	enum etype { laborer, secretary, manager, accountant, executive, researcher };
	char ch,sim;
	etype prev;
public:
	employye() :numemp(0), salary(0), ch(0)
	{ }
	void getemploy()
	{
		cout << "enter  number employye: "; cin >> numemp;
		cout << "salary: "; cin >> salary;
		cout << "date: "; cin >>date.month>>ch>>date.day>>ch>>date.year; 
		cout << "enter employye " << endl;
		cout << "Laborer, Secretary, Manager, Accountant, Executive, Researcher\n"; cin >> sim;
		switch (sim)
		{
		case 'l':  prev = laborer;  break;
		case 's':  prev = secretary;  break;
		case 'm':  prev = manager;  break;
		case 'a':  prev = accountant;  break;
		case 'e':  prev = executive;  break;
		case 'r':  prev = researcher;  break;
		default:
			cout << endl;
			break;
		}
		system("cls");
	}
	void putemploy()  
	{
		cout<<setw(3) << numemp <<setw(17) << salary << setw (20) << date.month <<"/"<<date.day<<"/"<<date.year;
		//cout << "employye doljnost " << endl;
		switch (prev)
		{
		case laborer: cout<< setw(27) << "laborer" << endl; break;
		case secretary: cout << setw(27) << " secretary" << endl; break;
		case manager: cout << setw(27) << "manager" << endl; break;
		case accountant: cout << setw(27) << "accountant" << endl; break;
		case executive: cout << setw(27) << "executive" << endl; break;
		case researcher: cout << setw(27) << "researcher" << endl; break;
		}
	}
	~employye()
	{ }

};

int main()
{ 
	employye s1,s2,s3;
	s1.getemploy();
	s2.getemploy();
	s3.getemploy();

	cout << "---------------------------------------------------------------------------------------|" << endl;
	cout << "Number		Employye		Date			 Position		" << endl;
	cout << "---------------------------------------------------------------------------------------|" << endl;
	s1.putemploy();
	s2.putemploy();
	s3.putemploy();


	return 0;
}