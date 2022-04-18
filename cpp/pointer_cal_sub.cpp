#include <iostream>

using namespace std;
const int MAX = 3;

int main()
{
    int var[MAX] = {10, 100, 200};
    int *ptr;

    // the pointer points the last var;
    ptr = &var[MAX-1];
    for (int i = MAX-1;i >= 0;i--)
    {
        cout << "the adress of var["<< i <<"] = ";
        cout << ptr << endl;

        cout << "the value of var["<< i <<"] = ";
        cout << *ptr << endl;

        ptr--;
    }

}