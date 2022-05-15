#include <iostream>
using namespace std;


#include <process.h> // для функции exit


const int LIMIT = 100; // размер массива



class safearray
{
private:
    int arr[LIMIT];
public:
   
        // обратите внимание, что функция возвращает ссылку!
        int& operator[](int n)
    {
        if (n < 0 || n >= LIMIT)
        {
            cout << "\nОшибочный индекс!"; exit(1);
        }
        return arr[n];
    }
};



int main()
{
    safearray sa1;
    // задаем значения элементов
    for (int j = 0; j < LIMIT; j++)
        sa1[j] = j * 10; // используем функцию слева от знака =
        // показываем элементы
    for (int j = 0; j < LIMIT; j++)
    {
        int temp = sa1[j]; // используем функцию справа от знака =
        cout << "Элемент " << j << " равен " << temp << endl;
    }
    return 0;
}