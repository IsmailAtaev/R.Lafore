#include <iostream>

using namespace std;



//int fadd(int& , int &);

int main()
{
    int fadd(int&, int&);
    int fsub(int&, int&);
    float fmull(float&, float&);
    float fdiv(float&, float&);
    cout << "calculator \n"<< "+-*/\n " << endl;
    char ch;
    do {
        char dir;
        cin >> dir;
        int n1 = 10, n2 = 4;
        float n3 = 8, n4 = 2;
        switch (dir) {
        case '+': cout << fadd(n1, n2) << endl; break;
        case '-': cout << fsub(n1, n2) << endl; break;
        case '*': cout << fmull(n3, n4) << endl; break;
        case '/': cout << fdiv(n3, n4) << endl; break;
        default: cout << "error" << endl;break;
        }
        cout << "y,n\t"; cin >> ch;
    } while (ch != 'n'); 
    return 0;
}

int fadd(int& a, int& b){
    int temp;
    temp = a + b;
    return temp;
}
int fsub(int& a ,int& b) {
    long temp;
    temp = a - b;
    return temp;
}
float fmull(float & x, float& z){
    float long temp;
    temp = ( x * z);
    return temp;
}
float fdiv(float& x, float& z){
    float long temp;
    temp = (x / z);
    return temp;
}