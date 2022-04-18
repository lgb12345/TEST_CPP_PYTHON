#include <iostream>

using namespace std;
const int MAX = 3;

int main()
{
    int var[MAX] = {10, 100, 200};
    int *ptr[MAX];

    // using an arrary to store the adress of every element 
    // of an arrary
    for (int i = 0; i < MAX; i++)
    {
        ptr[i] = &var[i];
    }
    for (int i = 0; i < MAX; i++)
    {
        cout << "the value of var["<< i <<"] = ";
        cout << *ptr[i] << endl;
    }
    return 0;
}