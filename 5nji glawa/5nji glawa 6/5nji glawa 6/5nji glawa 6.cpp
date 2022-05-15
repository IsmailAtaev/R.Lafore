#include <iostream>

using namespace std;

struct clock
{
    int hours;
    int minutes;
    int seconds;
    
};

clock d1, d2, tsum;

long hms_to_secs (clock);
clock time_to_secs (long);

int main()
{
    long totalsecs;
    cout << "enter hours :"; cin >> d1.hours;
    cout << "enter minutes :"; cin >> d1.minutes;
    cout << "enter seconds :"; cin >> d1.seconds;
    ////////////////////////////////////////////////
    cout << "enter hours :"; cin >> d2.hours;
    cout << "enter minutes :"; cin >> d2.minutes;
    cout << "enter seconds :"; cin >> d2.seconds;
    totalsecs = hms_to_secs (d1)+ hms_to_secs(d2);
    cout << endl;
    tsum = time_to_secs (totalsecs);
    cout << " TIME\t" << tsum.hours << " MINUTES\t" << tsum.minutes << " SECOND\t" << tsum.seconds << endl; 
    return 0;
}

long hms_to_secs(clock dd) {
     long totalsecs = (dd.hours * 3600) + (dd.minutes * 60) + dd.seconds;
    return totalsecs;
}

clock time_to_secs(long dd1){
    tsum.hours = 0;
    tsum.minutes = 0;
    tsum.seconds = dd1;

/*    for (int j=60;tsum.seconds>60;j++)
    {
        tsum.seconds -= 60;
        tsum.minutes++;
    }
    for (int i = 60; tsum.minutes > 60; i++)
    {
        tsum.minutes -= 60;
        tsum.hours++;
    }

   */ 
    tsum.hours = dd1 / (60*60);
    tsum.minutes = dd1 % (60*60)/60;
    tsum.seconds = dd1 % (60*60) % 60;
    return tsum;

}
