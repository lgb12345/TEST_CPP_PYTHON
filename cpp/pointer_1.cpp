#include <iostream>
using namespace std;

int main()
{
    int var = 20;
    int *ip;

    ip = &var;

    cout << "Value of var variable: ";
    cout << var << endl;

    cout << "the adress stored in ip variable: ";
    cout << ip << endl;

    cout << "the value of *ip varible :";
    cout << *ip << endl;

    cout << "the value of &var varible :";
    cout << &var << endl;

    return 0;
}
