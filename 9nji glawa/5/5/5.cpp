#include <iostream>
#include <iomanip>
using namespace std;

const int LEN = 80;

class employee // некий сотрудник
{
private:
  
     char name[LEN]; // имя сотрудника
    unsigned long number; // номер сотрудника
protected:
    void getdata()
    {
        cout << "\n Введите фамилию: "; cin >> name;
        cout << " Введите номер: "; cin >> number;
    }
    void putdata() const
    {
        cout << "\n Фамилия: " << name;
        cout << "\n Номер: " << number << endl;
    }
};  


class employye2 :private employee
{
private:
    double compensation;
    enum period {times, days,month};
    char ch;
    period prd;
protected:

    void set()
    {
        employee::getdata();
        cout << " Введите коменсация "; cin >> compensation;
        cout << " Введите периуд  Минуты, День, Месять   "; cin >> ch;
        switch (ch)
        {
        case't':prd = times; break;
        case'd':prd = days; break;
        case'm':prd = month; break;
        default:
            break;
        }
        
        //system("cls");
     }
    void get()
    {
        employee::putdata();
        cout <<" Коменсация : "<< compensation << endl;
        switch (prd)
        {
        case employye2::times: cout << setw(8) <<" Минуты";
            break;
        case employye2::days:cout <<setw(5)<< " День" ;
            break;
        case employye2::month:cout << setw(5) << " Месять" ;
            break;
        default:
            break;
        }
    }
    

};


class manager : private employye2 

{
private:
    char title[LEN]; 
    double dues; 
public:
    void getdata()
    {
        employye2::set();
        cout << " Введите должность: "; cin >> title;
        cout <<" Введите сумму взносов в гольф-клуб: "; cin >> dues;
    }
    void putdata() 
    {
        employye2::get();
        cout << "\n Должность: " << title;
        cout << "\n Сумма взносов в гольф-клуб: " << dues;
    }
};

/*class scientist : public employee // ученый
{
private:
    int pubs; // количество публикаций
public:
    void getdata()
    {
        employee::getdata();
        cout << " Введите количество публикаций: "; cin >> pubs;
    }
    void putdata() const
    {
        employee::putdata();
        cout << "\n Количество публикаций: " << pubs;
    }
};
///////////////////////////////////////////////////////////
class laborer : public employee // рабочий
{
};

class foreman : public laborer 
{
private:
    float quotas; // норма выработки
public:
    void getdata()
    {
        laborer::getdata();
        cout << " Введите норму выработки: "; cin >> quotas;
    }
    void putdata() const
    {
        laborer::putdata();
        cout << "\n Норматив: " << quotas;
    }
};
///////////////////////////////////////////////////////////

*/

int main()
{
    setlocale(LC_ALL, "rus");
    /*laborer l1;
    //foreman f1;
    // введем информацию о нескольких сотрудниках
    cout << endl;
    cout << "\nВвод информации о первом рабочем";
    l1.getdata();
    cout << "\nВвод информации о первом бригадире";
    f1.getdata();
    // выведем полученную информацию на экран
    cout << endl;
    cout << "\nИнформация о первом рабочем";
    l1.putdata();
    cout << "\nИнформация о первом бригадире";
    f1.putdata();*/

    manager m;
    m.getdata();
    m.putdata();

    cout << endl;
    return 0;
}