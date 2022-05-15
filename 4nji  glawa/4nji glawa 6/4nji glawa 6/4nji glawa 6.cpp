#include <iostream>
#include <conio.h>

using namespace std;

  enum etype {laborer, secretary, manager, accountant, executive, researcher};

  // labirer , chornorabociy 
  //executive administratiwnye 
  //researche ! isledowatel


int main()
{
    etype prev;
    char sim;

    cout << "enter fist letter post \n";
    cout << "laborer, secretary, manager, accountant, executive, researcher\n";
    cin >> sim;
    switch (sim)
    {    
    case 'l':  prev = laborer;  break;
    case 's':  prev = secretary;  break;
    case 'm':  prev = manager;  break;
    case 'a':  prev = accountant;  break;
    case 'e':  prev = executive;  break;
    case 'r':  prev = researcher;  break;
    default:
        cout << endl;
        break;
    }

    switch (prev)
    {
    case 0: cout<< "laborer" << endl; break;
    case 1: cout << " secretary" << endl; break;
    case 2: cout << "manager" << endl; break;
    case 3: cout << "accountant" << endl; break;
    case 4: cout << "executive" << endl; break;
    case 5: cout << "researcher" << endl; break;
    }
    return 0;
}
