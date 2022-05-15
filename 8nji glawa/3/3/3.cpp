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
    time(int h, int s, int m) : hour(h), minutes(m), second(s)
    {  }
     const void display() 
    {
        cout << hour << ":" << minutes << ":" << second << endl;
    }

    time operator +(time);
    time operator ++();
   
};
time time::operator++()
{

    int  s = second + 1;
    int  m = minutes + 1;
    int  h = hour + 1;
     if (s > 59)
      {
          s -= 60;
          m++;
      }
    if (m > 59)
    {
        m-= 60;
        h++;
    }
    return time(s,m,h);

}

time time::operator+(time b1)
{
    
    int  s = second + b1.second;
    int  m = minutes + b1.minutes;
    int  h = hour + b1.hour;
      if (s > 59)
      {
          s -= 60;
          m++;
      }
    if (m > 59)
    {
        m-= 60;
        h++;
    }
    return time(s,m,h);
}
int main()
{
    time t1(5, 59, 59);
    time t2(4, 30, 30);
    time t3;
    t3 = t1 + t2;
    t3.display();
    return 0;
}