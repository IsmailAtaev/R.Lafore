#include <iostream>

using namespace std;

class ship {
private:
    static int number;
    int numeric;
    int gradus;
    float minutes;
    char ch;
public:
        ship(): gradus(0),minutes(0),ch(' ')
       {
            number++;
            numeric = number;
        }

    ship(int grad,float min,char c):gradus (grad), minutes(min),ch(c)
    { }
    
    int getgradus()
    {
        return gradus;
    }

    void setgradus(int value)
    {
        gradus = value;
    }
    float getminutes()
    {
        return minutes;
    }
    void setminutes(float value)
    {
        minutes=value;

    }
    
    void charekter(char value)
    {
        ch = value;
    }

    
    void print()
    {
        cout << "moye number"<< numeric << endl;
        cout << "gradus " << gradus <<'\xF8'<< minutes <<"'"<< ch <<endl;
    }
    void println() 
    {
       print();
    }

    ~ship()
    { }

};

int ship::number = 0; 

int main()
{
    ship obj1, obj2,objres;
    obj1.setgradus(3);
    obj1.setminutes(69);
    obj1.charekter('w');
    obj1.println();
    obj2.setgradus(33);
    obj2.setminutes(3.65);
    obj2.charekter('n');
    obj2.print();
    return 0;
}