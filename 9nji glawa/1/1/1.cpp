#include <iostream>
#include <string>

using namespace std;

class pulication
{
private:
	string str;
	float cost = 0;
public:

	void setbook() 
	{
		cout << "enetr name book: " ;
		//getline(cin, str);
		cin >> str;
		//cin.get(arr,st);
		cout << endl;
		cout << "enter cost book: "; cin >> cost;
		//system("cls");
	}
	void getbook() const 
	{
		cout << "name book  " << str <<endl;
		cout << "cost book  " << cost << endl;
	}
};


class book :private pulication
{
private:
	int page;
public:
	book():page(0)
	{  }
	void setbook()
	{
		pulication::setbook();
		cout << "enter who page a book: "; cin >> page;
	}
	void getbook()const 
	{
		pulication::getbook();
		cout << "page a book: " << page << endl;
	}

};

class type : private pulication
{
private :
	 float time;
public :
	type() : time(0)
	{  }
	void setbook()
	{
		pulication::setbook();
		cout << "enter time a book "; cin >> time;
	}
	void  getbook() const 
	{
		pulication::getbook();
		cout << "time "<< time<< endl;
	}
};





int main()
{
	book b1;
	type t1;
	b1.setbook();
	//b1.getbook();
	//cout << endl;
	t1.setbook();
	b1.getbook();
	t1.getbook();


	return 0;
}

/*
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
class publication // базовый класс
{
private:
    string title;
    float price;
public:
    void getdata()
    {
        cout << "\nВведите заголовок:"; cin >> title;
        cout << "Введите цену:"; cin >> price;
    }
    void putdata()const
    {
        cout << "\nЗаголовок:" << title;
        cout << "\nЦена:" << price;
    }
};


class book :private publication // порожденный класс
{
private:
    int pages;
public:
    void getdata()
    {
        publication::getdata();
        cout << "Введите число страниц:"; cin >> pages;
    }
    void putdata()const
    {
        publication::putdata();
        cout << "\nСтраниц:" << pages;
    }
};
///////////////////////////////////////////////////////////
class tape :private publication // порожденный класс
{
private:
    float time;
public:
    void getdata()
    {
        publication::getdata();
        cout << "Введите время звучания:"; cin >> time;
    }
    void putdata()const
    {
        publication::putdata();
        cout << "\nВремя звучания:" << time;
    }
};
///////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "rus");
    book book1; // определить публикации
    tape tape1;
    book1.getdata(); // получить данные о них
    tape1.getdata();
    book1.putdata(); // вывести данные о них
    tape1.putdata();
    cout << endl;
    return 0;
}*/