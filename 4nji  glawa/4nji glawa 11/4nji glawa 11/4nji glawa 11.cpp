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
    time t1,t2,t3;
    t3.hours = NULL;
    t3.seconds = NULL;
    int day = 24,z;
    cout << "1 enter hours,minutes, seconds"; cin >> t1.hours >> a >> t1.minutes >> a >> t1.seconds;
    long totalsecs = (t1.hours * 3600) + (t1.minutes * 60) + t1.seconds;

    cout << "2 enter hours,minutes, seconds"; cin >> t2.hours >> a >> t2.minutes >> a >> t2.seconds;
    long x = (t2.hours * 3600) + (t2.minutes * 60) + t2.seconds;

    x += totalsecs;
    t3.minutes = (x * 60) / 3600;
   
    while  (t3.minutes >59 )
    {
        t3.hours++;
        t3.minutes -= 59;

    }   
    cout << "   otwet    "<< t3.hours <<"."<<t3.minutes<<"."<<t3.seconds<< endl;
    return 0;

}
