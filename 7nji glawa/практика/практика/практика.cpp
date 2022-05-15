#include <iostream>
#include <string>

using namespace std;

class sort {
protected:
	string name;
public :

	void set()
	{
		cout << " enter name "; cin >> name;
		}
	void get()
	{

		cout << "answer " << name <<endl;
	}

	string gettersort()
	{
		return name;
	}



};




/*
class image {


public:
	
	void getimageinfo()
	{
		for (int i =0; i< lenght; i++)
		{
			cout << pixles[i].getinfo() << endl;
		}
	}



private:
	class pixle  
	{
	public:
		pixle(int r, int g, int b)
		{
			this->r = r;
			this->g = b;
			this->b = b;

		}

		string getinfo()
		{
			return "pixel : r" + to_string(r) + "g  = " + to_string(g) + " b = " + to_string(b);



		}

	private :
		int r, g, b;

	};

	const int lenght = 5;

	pixle pixles[5]
	{
		pixle(0,4,64),
		pixle(4,14,10),
		pixle(111,4,24),
	pixle(244,244,14),
	pixle(111,179,64),
	};


};

int main()
{






	image img;
	img.getimageinfo();


	return 0;
}
*/






int main()
{
	/*void sss(char*, const char *);

const 	char* str1 = "pospeshsysh luydey nasmeshysh";
	
	char str2[80];

	

	sss(str2,str1);
		
	cout << str1;*/
	
	void bsort(sort**, int);
	sort* ptr[100];
	int n = 0;
	char ch;
	do {
		ptr[n] = new sort;
		ptr[n]->set();
		n++;
			   		 	  	  	 	
		cout << "y n"; cin >> ch;
	} while (ch != 'n');


	for (int j =0; j < n -1;j++)
			ptr[j]->get();
	

	bsort(ptr, n);



	for (int e= 0; e < n ; e++)
	{
		ptr[e]->get();
		cout << endl; 
	}


	return 0;
}

void bsort(sort**sor,int q)
{

	void order(sort **pp1, sort **pp2);
	for (int i = 0; i < q - 1; i++)
		for (int k = i + 1; k < q; q++)
			order(sor +i, sor +k);

}


void order(sort **p1,sort **p2)
{
	if ( (*p1)->gettersort( ) > (*p2)->gettersort( ) )
	{
		sort* tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
	}

}
	 





	 /*void bsort(int*, int);
	const int n = 10;
	int arr[n] = {37,84,62,91,11,65,57,28,19,49};

	bsort(arr, n);


	for (int i = 0; i < n; i++)
		cout << arr[i]<< endl;
	*/

/*	int v1 ;
	int v2 ;
	cout << &v1 << "\n" << &v2 << "\n" <<endl;

	int* ptr;
//	cout <<"dnvcjdnv     " <<sizeof(ptr);

	ptr = &v1;
	*ptr = 37;
	v2 = *ptr;
	cout << v2 << endl;
	*/

/*
void bsort(int* ptr, int n)
{
	void order(int*, int*);
	int j, k;

	for (int j = 0; j < n - 1; j++)
		for (int k = j + 1; k < n; k++)
			
			order(ptr + j, ptr + k);
					   			 		  
}

void order(int *num1, int*num2)
{
	if (*num1 > * num2)
	{
		int temp = *num1;
		*num1 = *num2;
		*num2 = temp;
	}
}*/

/*
void sss(char *p, const char * str)
{
	while (*str)
	{
		*p++ = *str++;
		*p = '\0';
	}
}*/