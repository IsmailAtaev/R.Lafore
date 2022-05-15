#include <iostream>

using namespace  std;

class safearay {
private :
    int arr, a, b;
    int limit[5]{0,0,0,0};
public :
    void putle( int &q1, int &q2)
    {
       if (q2 > 0 || q2 > 5) {

            for (int i = 0; i <= q2; i++){
                if (i == q2) {
                     limit[i]= q1;
                    cout << "add  " << limit[i] << endl;
                }
         }
        }
        }
    void getel(int& aa, int& arrr) {
        if(arrr>0 && arrr< 5)
        {
            for (int j = 0; j <= arrr; j++) {
                if (j == arrr)
                {
                    limit[j];
                    cout << "resul  " << limit[j] << endl;
                }
            }
        }
    }
};

int main()
{
    int arr, a, b;
    safearay s1;
    cout << "enter number add : " << endl;
    cin >> a;
    cout << "enter number add mas ? : " << endl;
    cin >> arr;
    s1.putle(a,arr);
    cout << endl<< endl;
    cout << "enter number add mas view ? : " << endl;
    cin >> arr;
    s1.getel(a, arr);

    return 0;
}