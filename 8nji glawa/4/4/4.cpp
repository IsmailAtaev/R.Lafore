#include <iostream>
#include <process.h>

using namespace std;

class Int 
{
private:
	int i;
public:
	Int(): i(0) 
	{ }
	Int(int ii) : i(ii)
	{  }
	
	void getInt() 
	{
		cin >> i;
	}
	void putInt() 
	{
		cout << i;
	}
	operator int()
	{
		return i;
	}
	Int operator +(Int a)
	{
		return  chek(long double(i) + long double(a)); }
	Int operator -(Int a) {

		return  chek(long double(i) - long double(a));
	}
	Int operator *(Int a) {

		return  chek(long double(i) * long double(a));
	}
	Int operator /(Int a) {

		return  chek(long double(i) / long double(a));
	}
	Int chek(long double answer)
	{
		if (answer > 2147483647.0L || answer < -2147483647.0L)
		{
			std::cout << "error "; exit(1);
			return Int(int (answer));
		}
	}
};
int main()
{
	Int alpha = 20;
	Int beta = 7;
	Int delta, gamma;
	gamma = alpha + beta; // 27
	cout << "\ngamma ="; gamma.putInt();
	gamma = alpha - beta; // 13
	cout << "\ngamma ="; gamma.putInt();
	gamma = alpha * beta; // 140
	cout << "\ngamma ="; gamma.putInt();
	gamma = alpha / beta; // 2
	cout << "\ngamma ="; gamma.putInt();
	delta = 2147483647;
	gamma = delta + alpha; // ошибка переполнения
	delta = -2147483647;
	gamma = delta - alpha; // ошибка переполнения
	cout << endl;
	return 0;
}