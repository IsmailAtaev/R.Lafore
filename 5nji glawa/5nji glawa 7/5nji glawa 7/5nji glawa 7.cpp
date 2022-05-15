#include <iostream>
#include <string>

using namespace std;

double power (char n, int = 2);
double power (int n, int = 2);
double power (long n, int = 2);
double power (float n, int = 2);
double power (double n, int = 2);

double n;
int p;

int main()
{
	cout << " char \n" << power('r', 5) << endl;
	cout << " double \n" << power(3.65656565, 5) << endl;
	cout << " long  \n" << power( 3, 5) << endl;
	cout << " int  \n" << power(23, 5) << endl;
	cout << " float   \n" << power(3.697f, 5) << endl;
	system("pause");
	return 0;

}

double power(double n, int p)
{
	double res = n; 
	for (int i = 1; i < p; i++)
		res *= n;
	return res;
}
double power(char n ,int p)
{
	char res = n;
	for (int j = 1; j < p; j++)
		res *= n;
	return res;
}
double power(long n, long p)
{
	long res = n;
	for (int j = 1; j < p; j++)
		res *= n;
	return res;
}
double power(int n,int p)
{
	int res = n;
	for (int j = 1; j < p; j++)
		res *= n;
	return res;
}
double power(float n , float p)
{
	float res = n;
	for (int j = 1; j < p; j++)
		res *= n;
	return res;
}