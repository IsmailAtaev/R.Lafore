#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
	char ch;
	unsigned long  a = 0;
	cout<<"\n vvedite cislo:";
	while (( ch = _getche()) != 'r')
		a = a * 10 + ch - '0';
	cout << "\npolucenoe cislo \n"<< a<< endl; 
	return 0;
}
