#include <iostream>
using namespace std;

class queue
{
private:
     enum { MAX = 10 }; // немного нестандартный синтаксис
    int arr[10];
    int prev =0 ; 
    int sled=0 ;
    int n = 10;

public:
       int  a = 10;
    void put(int q1)
    {/*
       while (n == 10 )
        {
           if (a < 10)
           {
               sled = arr[MAX];
               arr[MAX] = prev;
               --arr[MAX];
               arr[MAX] = sled;
           }
            prev = q1;
           arr[MAX] = prev;
           --a;
  
        }
    */
      
        prev = q1;
        for (int j = 10; j<= 10; j--)
        {
            arr[j] = prev;
        }



    }

    void get()
    {
//        for (int j = 1 ; j < 10; j++)
  //      {
         cout <<  arr[10]<< endl;
      //  }
    }
};


int main()
{
    queue s1;
    s1.put(12);
  //  s1.put(36);
   s1.get();


    return 0;
}