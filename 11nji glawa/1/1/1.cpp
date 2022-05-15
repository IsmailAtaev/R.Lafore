#include <iostream>
#include <string>

using namespace std;

class publication
{
private:
	string Str;
	float Cost = 0;
public:
	publication(): Str(""),Cost(0)
	{  }
	publication(string str, int cost)
	{
		this->Str = str;
		this->Cost = cost;
		cout << "zapushen bazowye class constructor  " << endl;
	}
	publication(publication& pblctn)
	{
		this->Str = pblctn.Str;
		this->Cost = pblctn.Cost;
		cout << "zapushen bazowye class " << endl;
	}
	void setbook()
	{
		cout << " Enetr name book: "; cin >> Str;
		cout << endl;
		cout << " Enter cost book: "; cin >> Cost;
	}
	float  getCost() 
	{
		return this->Cost;
	}
	string getStr()
	{
		return this->Str;
	}
};

class Book :private publication
{
private:
	int Page;
public:
	Book() :Page(0)
	{  }
	Book(int page)
	{
		this->Page = page;
	}
	void setook()
	{
		pulication::setbook();
		cout << "enter who page a book: "; cin >> page;
	}
	void getbook() override
	{
		pulication::getbook();
		cout << "page a book: " << page << endl;
	}

};

class type : private pulication
{
private:
	float time;
public:
	type() : time(0)
	{  }
	void setbook()
	{
		pulication::setbook();
		cout << "enter time a book "; cin >> time;
	}
	void  getbook() override
	{
		pulication::getbook();
		cout << "time " << time << endl;
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