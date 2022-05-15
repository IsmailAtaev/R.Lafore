#include <iostream>

using namespace std;

class san {
private:
    static int x;
    int a;

public:
    san() 
    {
        x++;
        a = x;
    }
    void put()
    {
        cout <<" moy nomer "<< a << endl;
    }

    static void reset()
    {
        x = 0;
    }
    ~san()
    { }
};


int main()
{
    san::reset();
    san a1, a2, a3;
    a1.put();
    a2.put();
    a3.put();
    return 0;
}