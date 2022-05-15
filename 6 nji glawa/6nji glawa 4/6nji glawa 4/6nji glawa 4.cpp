#include <iostream>
#include <iomanip>

using namespace std;

class employee {
private :
	int numemp; 
	float salary; // zarplata 
public:
	
	employee() : numemp(0), salary(0)
	{ }
	employee (int num , float sal): numemp(num),salary(sal)
	{ }
	void add()
	{
		cout << "enter employee "; cin >> numemp;
		cout << "enter salary "; cin >> salary;
		system("cls");
	}
	void add_lisdt() const
	{
		cout << setw(25) << "employee " << setw(25) << "salary " << endl;
		cout<<setw(52) << "--------------------------------------------" << endl;
		cout << setw(20) << numemp << setw(26) << salary  << endl;
		cout << setw(52) << "--------------------------------------------" << endl;
	}
	~employee()
	{ }
};


int main()
{
	employee s1, s2, s3;
	s1.add();
	s2.add();
	s3.add();
	s1.add_lisdt();
	s2.add_lisdt();
	s3.add_lisdt();
	return 0;
}