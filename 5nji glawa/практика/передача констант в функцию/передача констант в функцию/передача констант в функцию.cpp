
#include <iostream>

using namespace std;

void repchar(char, int);

int main()
{
    repchar('*', 10);
    cout << " name and Surname " << endl;
    repchar('+', 40);
    cout << endl; 
    return 0;
}


void repchar(char ch, int n )
{
    for (int j = 0; j < n; j++)
        cout << j<<" ";
    cout << endl;
}