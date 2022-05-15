#include <iostream>

using namespace std;

int main ()
{
	const int size = 50;
	float Array[size];
	float  Number = NULL;
	for (int i = 0; i < size; i++)
	{
		Array[i] = rand() % 100,00;
		  Number += Array[i];	
	}
	float Answer = Number / size;
	cout << Answer << endl;
	return 0;
}