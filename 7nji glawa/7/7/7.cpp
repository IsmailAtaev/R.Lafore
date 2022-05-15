#include <string>
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

class Money {
private :
	int wlen = NULL;
	char charray[30];
	char str1[30];
	string str;// = "$1 234 567 890 123.99";
	public:
		void setmstold()
		{
			getline(cin, str);

		}
		void provera() 
		{
		str.erase(0,1);

		int x = str.find(' ');
		while (x < str.size()) 
		{
			str.replace(x, 1, "");
			x = str.find(' ');
		}
		/*wlen = str.length();
		for (int j = 0; j < wlen; j++)
		str.copy(charray, wlen, 0);
		charray[wlen] = 0;*/
		}


	void getmstold()
	{
		cout << str << endl;
		cout << charray << endl;
	}

};



int main()
{
	Money a;
	a.setmstold();
	a.provera();
	a.getmstold();

	_atold()

	return 0;
}