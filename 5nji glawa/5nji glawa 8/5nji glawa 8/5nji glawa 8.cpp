#include <iostream>

using namespace std;

void  abc(int &,int &);
int main()
{
	int fabs = NULL,asics = NULL;
	cout << "enter numer: "; cin >> fabs;
	cout << "enter numer: "; cin >> asics;
	abc(fabs, asics);
	cout << fabs << asics << endl;
	return 0;
}

void  abc(int &f, int &a){
	int temp = NULL;
	temp = f;
	f = a;
	a = temp;
}