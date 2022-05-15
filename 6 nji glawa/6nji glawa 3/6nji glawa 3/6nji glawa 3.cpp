#include <iostream>

using namespace std;

class time {
  private:
    int hour;
    int minutes;
    int second; 
public:
    time() : hour(0), minutes(0), second(0)
    { }
    time(int h,int s,int m): hour(h), minutes(m), second(s)
    {  }
    void display()const
    {
        cout << hour << ":" << minutes << ":" << second << endl;
    }

    void add_time(time b1, time b2) 
    {
        second = b1.second + b2.second;
        if (second > 59){
            second-= 60;
            minutes++;
        }
        minutes = b1.minutes + b2.minutes;
        if (minutes > 59)
        {
            minutes -= 60;
            hour++;
        }
        hour = b1.hour + b2.hour;
        
        /* long int temp = (b1.hour * 3600) + (b1.minutes * 60) + b1.second + (b2.hour*3600) + (b2.minutes*60) + b2.second;
        hour = temp / (60*60);
        minutes = temp % (60 * 60) / 60;
        second = temp % (60*60) % 60;*/
    }
};

int main()
{
    const time t1(5,59,59);
    const time t2(4, 30, 30);
    time t3;
    t3.add_time(t1,t2);
    t3.display();
    return 0;
}