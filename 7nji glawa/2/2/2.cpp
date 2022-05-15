#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class employee 
{
private:
    char name[11];
    long age;
    public:
        employee() : age (0)
        {  }
            void getdate()
        {
             cout << "enter name soldier: "; cin.get(name, 10, '$');
             cout << "enter N number soldier:"; cin >> age;
             system("cls");
        }
            void putdate() const
         {
             cout << "answer name soldier: " << name << endl;
             cout << "answer N number soldier:" << age << endl;
         }
        ~employee()
        { }
};

int main()
{

    employee empl[3];
    cout << "enter name and age soldier :\n" << endl;
    for (int i = 1; i < 3; i++ )
    {
        empl[i].getdate();
   
    }
    for (int j = 1; j < 3; j++)
    {
        empl[j].putdate();
   
    }


    return 0;
}