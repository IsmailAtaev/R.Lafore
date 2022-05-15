#include <iostream>
#include <cctype>
#include <string>

using namespace std;


class String {
private:
	char* Str;
public:
	String(char *str)
	{
		int lenght = strlen(str);
		this->Str = new char[lenght];
		strcpy(Str, str);
	}
	
	string getString() 
	{
		return this->Str;
	}

	~String()
	{
		delete[]Str;
	}
	void Upit();

};
void String::Upit()
{
	char* sssr = this->Str;
	while (*sssr)
	{
		*sssr = toupper(*sssr);
		sssr++;
	}

}


int main()
{

	String  a ("");

	
	return 0;

}