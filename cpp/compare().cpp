#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1("iris");
    string str2("irisbanana");
    string str3 = str2.substr(3);
    // string str4 = str2 -"iris"; **** wrong using
    int a = str2.compare(0, 4, str1);
    cout << a << endl;
    cout << str3 << endl;
    
    return 0;
}