#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int  main(){
	int num;
	string simb;
	cout << "enter simbol" << endl; 
	cin >> simb;
	cout <<"enter number"<< endl;
	cin >> num;
	cout << simb << setfill('.') << setw(10) << num << endl;
	return 0; 
}