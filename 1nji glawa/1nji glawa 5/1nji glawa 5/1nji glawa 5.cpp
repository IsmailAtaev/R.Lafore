/*#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::islower, std::toupper

int main()
{
    std::locale loc;
    std::string str = "Test String.\n";
    char c;
    for (std::string::size_type i = 0; i < str.length(); ++i)
    {
        c = str[i];
        if (std::islower(c, loc)) c = std::toupper(c, loc);
        std::cout << c;
    }
    return 0;
}*/

#include <iostream>
#include <CTYPE.h>

using namespace std;

bool isLower(char c)
{
    if (c >= 'a' && c <= 'z')
        return true;
    else
        return false;
}

void main()
{
    char c;
    cout << "wwedite string :"<< endl;
    cin >> c;
    cout << "otwet" << islower(c);
}