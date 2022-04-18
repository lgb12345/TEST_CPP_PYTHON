#include <iostream>

using namespace std;
const int MAX = 3;

int main()
{
    int var[MAX] = {10, 100, 200};
    int *ptr;

    // the pointer points the first var;
    ptr = var;
    for (int i = 0; i < MAX; i++)
    {
        cout << "the adress of var["<< i <<"] = ";
        cout << ptr << endl;

        cout << "the value of var["<< i << "] = ";
        cout << *ptr << endl;

        ptr++;
    }
    return 0;
}