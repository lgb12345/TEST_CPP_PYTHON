#include <iostream>
using namespace std;

int main()
{
    double num[5] = {100.0, 2.1, 3.4, 11.1, 55.7 };
    double *ptr;

    ptr = num;

    cout << "using ptr to print num: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "*ptr(p + " << i << "): ";
        cout << *(ptr + i) << endl;
    }

    cout << "using num to print num: " << endl;
    for (int i = 0; i < 5; i++ )
    {
        cout << "*(num + "<< i <<"): ";
        cout << *(num + i) << endl;
    }
    return 0;
}