#include <iostream>

using namespace std;

int main()
{
    int var1;
    int var2;
    int var3;

    char str1[10];

    cout << "the adress of var1: ";
    cout << &var1 << endl;

    cout << "the adress of var2: ";
    cout << &var2 << endl;

    cout << "the adress of var3: ";
    cout << &var3 << endl;

    cout << "the adress of (var3 - var2) : ";
    cout << &var3 - &var2 << endl;

    cout << "the adress of str1: ";
    cout << &str1 << endl;


    return 0;
}