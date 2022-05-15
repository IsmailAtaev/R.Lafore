#include <iostream>
#include <string>

using namespace std;




class pulication
{
private:
	string str;
	float cost;
public:

	void setbook()
	{
		cout << "enetr name book: ";	cin >> str;
		cout << endl;
		cout << "enter cost book: "; cin >> cost;
	}
	void getbook() const
	{
		cout << "name book  " << str << endl;
		cout << "cost book  " << cost << endl;
	}
};

/*
class sale
{
private:

	enum { size = 3 };
	float  arr[size];

public:
	void setter()
	{
		for (int j = 0; j < size; j++)
		{
			cout << "monhtg" << j + 1 << ":";
			cin >> arr[j];
		}
	}
	void getter()
	{


		for (int i = 0; i < size; i++)
		{
			cout << "motht " << i + 1 << ": " << arr[i] << endl;
		}
	}
};*/


class book :private pulication//, private sale
{

private:
	int page;
public:
	void setbook()
	{
		pulication::setbook();
		cout << "enter who page a book: "; cin >> page;
//		sale::setter();
	}
	void getbook()
	{
		pulication::getbook();
		cout << "page a book: " << page << endl;
	//	sale::getter();
	}

};

class type : private pulication//, private sale
{
private:
	float time;
public:
	void setbook()
	{
		pulication::setbook();
		cout << "enter time a book "; cin >> time;
		cout << endl;
		//sale::setter();
	}
	void  getbook()
	{
		pulication::getbook();
		cout << "time " << time << endl;
	//	sale::getter();
	}
};



class disk :public pulication
{
private:
	enum plaer {cd,dvd};
	char ch;
	void a()
	{
		cout << "enter cd or dvd:" << endl;
		cin >> ch;
	}
public:
	plaer p1;

	void set()
	{	
		
		//pulication::setbook();
		disk::a();
		switch (ch)
		{
		case'c':p1 = cd; break;
		case'd':p1 = dvd; break;
		default: 
			break;
		}
	}
	void get()
	{
		//pulication::getbook();
		switch (p1)
		{
		case 'c':cout << "cd" << endl; break;

		case'd': cout << "dvd" << endl; break;
//		case disk::dvd:
	//		break;
		default:
			break;
		}
	}
};

int main()
{

	book b1;
	type t1;
	disk s1;
	s1.set();
	s1.get();

	/*
	b1.setbook();
	b1.getbook();
	cout << "t1  " << endl;
	t1.setbook();
	t1.getbook();*/


	return 0;
}
