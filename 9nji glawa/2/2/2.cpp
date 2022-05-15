#include <iostream>
#include <string> 

using namespace std;

class str
{
private:
    enum { SZ = 80 }; // размер массива
    char sstr[SZ]; // массив для хранения строки
public:

    str()
    {
        sstr[0] = '\x0';
    }
    
    str(char s[])
    {
        strcpy(sstr, s);
    } 

    void display() const
    {
        cout << sstr;
    }
    
    operator char* ()
    {
        return sstr;
    }
};



int main()
{
    str s1; 
    char xstr[] = "Ура, товарищи! "; 
    s1 = xstr; 
    s1.display(); 
    str s2 = "Мы победим!"; 
    cout << static_cast<char*>(s2); 
    cout << endl;
    return 0;
}
