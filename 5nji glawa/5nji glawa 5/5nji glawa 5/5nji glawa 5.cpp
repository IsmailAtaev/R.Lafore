#include <iostream>

using namespace std;

int hms_to_secs(int ,int , int );


int main()
{   
    int a, b, c;
    long totalsecs;
    cout << "enter hours :"; cin >> a;
    cout << "enter minutes :"; cin >> b;
    cout << "enter seconds :"; cin >> c;
    totalsecs  = hms_to_secs(a, b, c);
    cout<<"\n seconds \t" << totalsecs << endl;
    return 0;
}

 int hms_to_secs(int x, int y, int z){
     return (x * 3600) + (y * 60) + z;
}