#include <iostream>

using namespace std;

struct time {

    int hours;
    int minutes;
    int seconds;
};

int main()
{
    char a;
    time t1;

    cout << "enter hours,minutes, seconds"; cin >> t1.hours >> a >> t1.minutes >> a >> t1.seconds;
    long totalsecs = (t1.hours * 3600) + (t1.minutes*60) + t1.seconds;
    cout << "otwet" << totalsecs << endl; 
    
}
