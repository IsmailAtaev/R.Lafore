#include <iostream>

class Int {
private :
	int i;
public:
	Int() {i = 0;}
	Int(int ii) {
		i = ii; 
	}
	void add(Int a, Int b){
		i = a.i + b.i;
	}
	void show(){
		std::cout << i << std::endl;
	}
};

int main()
{
	Int i1(37);
	Int i2(27);
	Int i3;
	i3.add(i1,i2);
	i3.show();
	return 0;
}