﻿/*Добавьте в класс time из упражнения 5 возможность вычитать значения
времени, используя перегруженную операцию -, и умножать эти значения, используя тип float и перегруженную операцию *.
7. Модифицируйте класс fraction в четырехфункцион*/

#include <iostream>


using namespace std;

class time 
{
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
    time operator -(time);
    time operator ++();
    time operator --();
    time operator ++(int);
    time operator --(int);
    time operator *(time);
protected:
    time chek(time qw)
    {
        while (qw.minutes > 59)
        {
            if (qw.second > 59)
            {
                qw.second -= 59;
                qw.minutes++;
            }
            if (qw.minutes > 59)
            {
                qw.minutes -= 59;
                qw.hour++;
            }
        }
        return time(qw);
    }
    time chek(int h, int m, int s)
    {
        while (m > 59)
        {
            if (s > 59)
            {
                s -= 59;
                m++;
            }
            if (m > 59)
            {
                m -= 59;
                h++;
            }
        }
        return time(h, m, s);
    } 
    time chek(float h, float m, float s)
    {
        while (m > 59.0)
        {
            if (s > 59.0)
            {
                s -= 59.0;
                int ss= static_cast <int>(s);
                second+=ss;
                m++;
            }
            if (m > 59.0)
            {
                m -= 59.0;
                int mm = static_cast <int>(m);
                minutes += mm;
                h++;
            }
        }
        return time(h, m, s);
    }


};
time time::operator*(time b1)
{
    float h = hour * b1.hour;
    float m = minutes * b1.minutes;
    float s = second * b1.second;
    return time(h,m,s);
}

time time::operator ++(int)
{
    time r;
    r.second = second++;
    r.minutes = minutes++;
    r.hour = hour++;
    return time(r);
}
time time::operator--(int)
{
    time r;
    r.second = second--;
    r.minutes = minutes--;
    r.hour = hour--;
    return time(r);
}

time time::operator++()
{
    hour += 1;
    minutes += 1;
    second += 1;
    return chek(hour, minutes, second);
}

time  time::operator --()
{
    hour -= 1;
    minutes -= 1;
    second -= 1;
    return chek(hour, minutes, second);
}

time time::operator+(time b1)
{
    time qw;
    qw.second = second + b1.second;
    qw.minutes = minutes + b1.minutes;
    qw.hour = hour + b1.hour;
    return chek(qw);
}

time time::operator-(time b1)
{
    time qw;
    qw.second = second - b1.second;
    qw.minutes = minutes - b1.minutes;
    qw.hour = hour - b1.hour;
    return chek(qw);
}

int main()
{
    time t1(5, 59, 59);
    time t2(55, 61, 61);
    time t3;
    ++t3;
    t3.display();
    --t3;
    t3.display();
    t3++;
    t3.display();
    t3--;
    t3.display();
    t3 = t1 + t2;
    t3.display();
    t3--;
    t3.display();
    return 0;
}