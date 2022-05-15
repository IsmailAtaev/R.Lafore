#include <iostream>

using namespace std;

int main()
{
    int res = 0;
  const int mas = 5; 
  int  arr[mas];
  for (int i = 1;i < mas ; i++)
  {
      cin >> arr[i];
  }

  for (int j =1;j<mas;j++)
  {
      if (res < j)
      {
          res = arr[j];
      }
      cout << "mas " << arr[j] << endl;
  }
  cout << "result " << res << endl;
	return 0;
}