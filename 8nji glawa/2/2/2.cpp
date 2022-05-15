#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class String {
private:
	enum { SZ = 80 };
	char str[SZ];
public:
	String(): str("\0")
	{  }
	String(char ch[]) 
	{
		for (int i =0; i < SZ;i++)
		{
			str[i] = ch[i];
		}
		//strcpy(str, ch);
	}
	void setter()
	{
		cout << "enter str \t"; cin >> str;
	}
	void display () const
	{	cout << " str " << str << endl;}
	String operator+=(String ss)
	{
		if (strlen(str)+strlen(ss.str) >= SZ)
		{
			exit(1);
		}
		//strcat(str, ss.str);
		string sss = string(ss.str);

/*		int size = strlen(ss.str);
		int n = 0;
		for (int i = size + 1; i < SZ; i++)
		{
			str[i] = ss.str[i];
		}*/
		return String(str);
	}
	/*void operator+=(String ss) 
	{
		if (strlen(str) + strlen(ss.str) < SZ)
		{
			int size = 	strlen(ss.str);
				int lenght = 0;
				
				for (int j = size+1; j < SZ; j++)
				{
					lenght++;
					str[j] = ss.str[lenght];
				}
		}
		else
		{
			cout << "\nПереполнение!";
			exit(1);
		}
	} 
	void operator = (String ss) 
	{        
		if(strlen(str) + strlen(ss.str) < SZ)        
		{
			int size = strlen(ss.str);
			int lenght = 0;
		}        
		else  
		{    
			cout << "\nПереполнение!";           exit(1);      
		}                     
	}*/
};
int main()
{
	String s1, s2, s3;

	s1.setter();
	s2.setter();
	s3.setter();
	s3 = s1 += s2;     
	s1.display();
	cout << endl;
	return 0;
}