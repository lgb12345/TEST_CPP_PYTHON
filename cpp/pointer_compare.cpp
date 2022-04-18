#include <iostream>

using namespace std;
const int MAX = 3;

int main()
{
    int var[MAX] = {10, 100, 200};
    int *ptr;

    ptr = &var[0]; // equals "ptr = var;"
    int i = 0;
    while( ptr <= &var[MAX-1] )
    {
        cout << "the adress of var[" << i << "] = ";
        cout << ptr <<endl;

        cout << "the value of var[" << i << "] = ";
        cout << *ptr << endl;

        ptr++;
        i++;
    }
}